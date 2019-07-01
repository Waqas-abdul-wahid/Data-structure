#include<iostream>
#include<conio.h>
#include<sstream>
#include<string>
#include<fstream>

std::string **generateMatrix(int rows,int cols)
{
	std::string **mat=new std::string*[rows];
	for(int i=0;i<rows;i++)
	{
		mat[i]=new std::string[cols];
	}
	return mat;
}
void populateMatrix(std::ifstream &f,std::string **mat,int rows,int cols){
	std::string s;
	for(int i=0;i<rows;i++)
	{
		getline(f,s);
		std::stringstream ss(s);
		for(int j=0;j<cols;j++)
		{
			ss>>mat[i][j];
		}
	}
}

void shellSort(std::string **arr,int n){
	for(int gap = n/2 ; gap > 0 ; gap/=2){
		for(int out = gap; out <n; out+=1){
			std::string temp = arr[out][2];
			int in;
			for(in = out ;in>=gap && arr[in - gap][5]>temp;in-=gap)
			{
				arr[in][5] = arr[in - gap][5];
			}
				arr[in][5] = temp;
		}


	}
}
void printMatrix(std::string **mat,int rows,int cols){
	for(int i=0;i<rows;i++){


		std::cout<<mat[i][0];
		std::cout<<std::endl;
	}
}
int main()
{
int rows=301,cols=22;
std::ifstream data("HRDataset.csv");
std::string **mat = generateMatrix(302,22);
populateMatrix(data,mat,rows,cols);
shellSort(mat,301);
printMatrix(mat,rows,cols);
return 0;}
