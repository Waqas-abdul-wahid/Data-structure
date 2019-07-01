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
int partition(std::string **info,int start,int end)
{ 	
	std::string pivot = info[start][0];
	
	int pIndex = end+1;
	
	for(int j=end ; j>start;j--)
	{
		if(info[j][0]>=pivot)	{
			pIndex--;
			std::string* t = info[pIndex];
			info[pIndex]= info[j];
			info[j] = t;	}
	}
			std::string* t = info[pIndex-1];
			info[pIndex-1] = info[start];
			info[start] = t;

	return (pIndex - 1);
}
void quickSort(std::string **info,int start,int end){

	if(start<=end){
		int pi = partition(info,start,end);
		quickSort(info,pi+1,end);
		quickSort(info,start,pi-1);	}
}
void printMatrix(std::string **info,int rows,int cols){
	for(int i=0;i<rows;i++){
	
		std::cout<<info[i][0]<<"\n";}
}
int main()
{
int rows=301,cols=22;
std::ifstream data("data.txt");
std::string **mat = generateMatrix(302,22);
populateMatrix(data,mat,rows,cols);
quickSort(mat,0,300);
printMatrix(mat,rows,cols);
return 0;}
