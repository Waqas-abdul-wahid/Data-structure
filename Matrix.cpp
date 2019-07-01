#include <iostream>
#include <stdlib.h>

void randomValues(float **, int, int);
void printMatrix (float **, int, int);
void deleteMatrix (float**, int);
float determinant (float **);
void inverse (float **,float **, int, int);
void multiplication(float **, float **, float **);
void pointWiseMulti(float **, float **, float**);

int main()
{
	int row=2;
	int col=2;
	float **matrix1 = new float*[row];
	for (int i=0;i<row;++i)
	{
		matrix1[i]=new float [col];
	}
	float **matrix2= new float*[col];
	for (int i=0;i<col;++i)
	{
		matrix2[i]= new float [row];
	}
	float **matrix3 = new float*[row];
	for (int i=0;i<row;++i)
	{
		matrix3[i]=new float [col];
	}
	float **matrix4= new float*[col];
	for (int i=0;i<col;++i)
	{
		matrix4[i]= new float [row];
	}
	float **matrix5= new float*[col];
	for (int i=0;i<col;++i)
	{
		matrix5[i]= new float [row];
	}
	randomValues(matrix1, row, col);
	std::cout<<"Printing Matrix 1: \n";
	printMatrix (matrix1, row, col);
	randomValues(matrix2, row, col);
	std::cout<<"Printing Matrix 2: \n";
	printMatrix (matrix2, row, col);
	multiplication (matrix1,matrix2, matrix3);
	std::cout<<"\nThe Multiplication of Matrix 1 and Matrix 2 is below; \n";
	printMatrix(matrix3,row, col);
	pointWiseMulti(matrix1,matrix2,matrix4);
	std::cout<<"\nThe Point Wise Multiplication of Matrix 1 and Matrix 2 is below; \n";
	printMatrix(matrix4,row, col);
	float det=determinant(matrix1);
	inverse (matrix1,matrix5,row,col);
	deleteMatrix(matrix1, row);
	deleteMatrix (matrix2, row);
	
}

void randomValues(float **matrix, int row1, int col1)
{
	for (int i=0;i<row1;++i)
	{
		for (int j=0;j<col1;++j)
		{
			matrix[i][j]=rand() % 10+1;
		}
	}
}

void printMatrix (float **matrix, int row1, int col1)
{
	for (int i=0;i<row1;++i)
	{
		for (int j=0;j<col1;++j)
		{
			std::cout<<" "<<matrix[i][j]<<" ";
		}
		std::cout<<"\n";
	}
}

void deleteMatrix (float** matrix, int row1)
{
	for (int i=0;i<row1;++i)
	{
		delete [] matrix[i];
	}
	delete [] matrix;
}

float determinant (float **matrix)
{
	float det=(matrix[0][0]*matrix[1][1])-(matrix[1][0]*matrix[0][1]);
	return det;
}

void inverse (float **matrix1, float ** matrix5 ,int row, int col)
{
	float det=determinant(matrix1);
	matrix1[0][1]=matrix1[0][1]*-1;
	matrix1[1][0]=matrix1[1][0]*-1;
	
	for(int i=0 ; i<row ; ++i)
	{
		for(int j=0 ; j<col ; ++j)
		{
			matrix5[i][j]=matrix1[i][j]/det;
		}
	}
	std::cout<<"\nPrinting Inverse Matrix\n\n";
	printMatrix(matrix5,row,col);
}

void multiplication(float **matrix1, float **matrix2, float **matrix3)
{
	int i,j,k,sum;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum=0;
			for(int k=0; k<2; ++k)
			{
				sum = sum + matrix1[i][k] * matrix2[k][j];
			}
			matrix3[i][j] = sum;
		}
	}
}

void pointWiseMulti(float **matrix1, float **matrix2, float**matrix4)
{
	for (int i=0;i<2;++i)
	{
		for (int j=0;j<2;++j)
		{
			matrix4[i][j]=matrix1[i][j]*matrix2[i][j];
		}
	}
}
