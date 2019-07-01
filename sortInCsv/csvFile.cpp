#include<iostream>
#include<string>
#include<fstream>

int main()
{
	int row{310},col{3};
	std::string name;
	std::string ** matrix = new std::string*[row];
	for(int i=0;i<row;++i)
	{
		matrix[i]= new std::string[col];
	}
	std::cout<<"input csv file name(with extension):";
	std::cin>>name;
	
	std::ifstream file;
	file.open(name);
	
	if(!file.is_open())
		std::cout<<"File didn't opened "<<std::endl;
	
	for(int i=0;i<row;++i)
	{
		for(int j=0;j<col;++j){
			if(i<1)
			{
				getline(file,matrix[i][j],'\n');
			}
			if(i>0)
			{
				if(j<1)
				{
					getline(file,name,'"');
					getline(file,matrix[i][j],'"');
					getline(file,name,',');
				}
				if(j>0 && j<2)
				{
					getline(file,matrix[i][j],',');
				}
				if(j>1)
				{
					getline(file,matrix[i][j],'\n');
				}
			}
		}

	}
	
	for(int i=0;i<row;++i)
	{
		for(int j=1;j<(row-1);++j)
		{
			if(atoi(matrix[j][1].c_str())>atoi(matrix[j+1][1].c_str()))
			{
				for(int k=0;k<col;++k)
				{
					name = matrix[j][k];
					matrix[j][k] = matrix[j][k+1];
					matrix[j][k+1]= name;
				}
			}
		}
	}
	
	std::ofstream out("HRDataset_Sorted.csv");
	
		for(int i=0;i<row;++i)
		{
		for(int j=0;j<col;++j){
			if(i<1)
			{
				out<<matrix[i][j];
			}
			if(i>0)
			{
				if(j<1)
				{
					out<<'"';
					out<<matrix[i][j];
					out<<'"';
					out<<',';
				}
				if(j>0 && j<2)
				{
					out<<matrix[i][j];
					out<<',';
				}
				if(j>1)
				{
					out<<matrix[i][j];
				}
			}
		}
		out<<'\n';
	}
	/*for(int i=0;i<row;++i)
	{
		for(int j=0;j<col;++j)
		{
			std::cout<<matrix[i][j]<<" ";
		}
		std::cout<<std::endl;
	}*/	
	
	return 0;
}
