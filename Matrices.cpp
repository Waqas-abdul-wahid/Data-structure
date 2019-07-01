#include <iostream>
#include <stdlib.h>

void randomValues(int **, int, int);
void printMatrix (int **, int, int);
void transpose (int **, int **, int , int );
void deleteMatrix (int**, int);
int determinant (int **);
void inverse (int **, int, int, int);

int main()
{
	int row,col;
	std::cout<<"Enter number of Rows: ";
	std::cin>>row;
	std::cout<<"Enter number of Columns: ";
	std::cin>>col;
	int **m1 = new int*[row];
	for (int i=0;i<row;++i)
	{
		m1[i]=new int [col];
	}
	int **m2= new int*[col];
	for (int i=0;i<col;++i)
	{
		m2[i]= new int [row];
	}
	randomValues(m1, row, col);
	printMatrix (m1, row, col);
	transpose (m1, m2, row, col);
	printMatrix (m2, col, row);
	float det=determinant(m1);
	std::cout<<"\nThe Determinant of 2x2 array above is "<<det;
	inverse (m1,row,col, det);
	deleteMatrix(m1, row);
	deleteMatrix (m2,col);
}

void randomValues(int **matrix, int row1, int col1)
{
	for (int i=0;i<row1;++i)
	{
		for (int j=0;j<col1;++j)
		{
			matrix[i][j]=rand() % 8+1;
		}
	}
}

void printMatrix (int **matrix, int row1, int col1)
{
	std::cout<<"\nPrinting Array "<<row1<<"x"<<col1<<"\n";
	for (int i=0;i<row1;++i)
	{
		for (int j=0;j<col1;++j)
		{
			std::cout<<" "<<matrix[i][j]<<" ";
		}
		std::cout<<"\n";
	}
}

void transpose (int **matrices1, int **matrices2, int row1, int col1)
{
	for (int i=0;i<row1;++i)
	{
		for (int j=0;j<col1;++j)
		{
			matrices2[j][i]=matrices1[i][j];
		}
	}
}

void deleteMatrix (int** matrix, int row1)
{
	for (int i=0;i<row1;++i)
	{
		delete [] matrix[i];
	}
	delete [] matrix;
}

int determinant (int **matrix)
{
	int det=(matrix[0][0]*matrix[1][1])-(matrix[1][0]*matrix[0][1]);
	return det;
}

void inverse (int **matrix, int row, int col, int det)
{
	std::cout<<"\n\nInverse of 2x2 Matrix is: \n";
	for (int i=0;i<row;++i)
	{
		for (int j=0;j<col;++j)
		{
			std::cout<<(matrix[i][j])/det<<" ";
		}
		std::cout<<"\n";
	}
}
