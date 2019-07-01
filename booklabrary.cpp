#include <iostream>
#include <string>
int* createBookIsbn (int);
std::string* createBookTitle (int);
int* createBookPrice (int);
void printBookShelf(int*,std::string*,int*,int);
void insertBook (int*, std::string*,int*,int);
void deleteBook (int*, std::string*,int*,int);
int binarySearch (int *, int);

int main()
{
	int size=10;
	int choice=0;
	int* isbnNo=createBookIsbn(size);
	std::string* bookTitle=createBookTitle(size);
	int* bookPrice= createBookPrice (size);
	printBookShelf(isbnNo,bookTitle,bookPrice,size);
	std::cout<<"\n\nPlease select Options from Below; \n";
	std::cout<<"Press 1 to Insert Book: \n";
	std::cout<<"Press 2 to Delete Book:\n";
	std::cout<<"Please Enter your choice: ";
	std::cin>>choice;
	if (choice==1)
	{
		insertBook (isbnNo, bookTitle,bookPrice,size);
		printBookShelf(isbnNo,bookTitle,bookPrice,size);
	}
	else if (choice==2)
	{
		deleteBook (isbnNo, bookTitle, bookPrice, size);
		printBookShelf(isbnNo,bookTitle,bookPrice,size);
	}
	else
	{
		std::cout<<"You Entered Wrong Choice, please try again later. ";
	}
	
}


int* createBookIsbn (int size1)
{
	int* array1=new int[size1];
	int num=8765342;
	for (int i=0;i<size1;i++)
	{
		array1[i]=num;
		num++;
	}
	return array1;
}
std::string* createBookTitle (int size1)
{
	std::string* array1=new std::string[size1];
	array1[0]="Thinking in Java";
	array1[1]="Thinking in C++";
	array1[2]="Java- How to Program";
	array1[3]="Data Structures in C++";
	array1[4]="English Composition";
	array1[5]="Islamic History";
	array1[6]="C# - Best Practices";
	array1[7]="Thinking Sharp";
	array1[8]="How to Think Big";
	array1[9]="Presentation Secrets";
	return array1;
}
int* createBookPrice (int size)
{
	int* array1= new int[size];
	array1[0]=1000;
	array1[1]=1400;
	array1[2]=600;
	array1[3]=1000;
	array1[4]=500;
	array1[5]=1500;
	array1[6]=1000;
	array1[7]=1200;
	array1[8]=500;
	array1[9]=500;
	return array1;
}

void printBookShelf(int* isbnArray1,std::string* titleArray1,int* priceArray1, int size)
{
	std::cout<<"\t----Printing Book Shelf-----\n\n";
	for (int i=0;i<size;++i)
	{
		std::cout<<i<<") "<<isbnArray1[i]<<" , "<<titleArray1[i]<<" , "<<priceArray1[i]<<"\n";
	}
}

void insertBook (int* isbnArray, std::string* titleArray,int* priceArray,int size)
{
	int pos;
	int isbnNo,price;
	std::string title;
	std::cout<<"\nEnter ISBN No: ";
	std::cin>>isbnNo;
	std::cout<<"Enter Book Title: ";
	getline(std::cin, title);
	getline(std::cin, title);
	std::cout<<"Enter Price of Book: ";
	std::cin>>price;	
	std::cout<<"Where do you want to add your book? Please enter Index Number: ";
	std::cin>>pos;
	for (int i=10-1;i>pos;--i)
	{
		isbnArray[i]=isbnArray[i-1];
		titleArray[i]=titleArray[i-1];
		priceArray[i]=priceArray[i-1];
	}
		isbnArray[pos]=isbnNo;
		titleArray[pos]=title;
		priceArray[pos]=price;
}

void deleteBook (int* isbnArray, std::string* titleArray,int* priceArray,int size)
{
	
	int pos=binarySearch (isbnArray,size);
	if (pos==-1)
	{
		std::cout<<"ISBN Number is invlaid, please try again later. ";
	}
	else 
	{
		for (int i=pos;i<size-1;++i)
		{
			isbnArray[i]=isbnArray[i+1];
			titleArray[i]=titleArray[i+1];
			priceArray[i]=priceArray[i+1];
		}
		
	}
	
}

int binarySearch (int* isbnArray1, int size1)
{
	int isbn;
	std::cout<<"Enter ISBN number of the book you want to Delete: ";
	std::cin>>isbn;
	for (int i=0;i<size1;++i)
	{
		if (isbnArray1[i]==isbn)
		{
			return i;
		}
	}
	return -1;
}
