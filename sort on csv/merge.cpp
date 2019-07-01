#include<iostream>
#include<string>
#include<fstream>
#include<sstream>



std::string** genMat(int rows, int columns){


        std::string **matrix = new std::string*[rows];


        for(int i=0;i<rows;i++){


            matrix[i] = new std::string [columns];


        }

    return matrix;


}

void PrintofMat(std::string **data){


	for(int i=0;i<301;i++){


            std::cout<<data[i][0]<<" "<<data[i][1];

            std::cout<<std::endl;


	}

}


void Merge(std::string *S,std::string *LLL,int leftCount,std::string *RRR,int rightCount){

int i=0;
int j=0;
int k=0;


while(i<leftCount && j<rightCount){

    if(LLL[i]>RRR[j]){


			S[k]=LLL[i];

			k++;
			i++;


		}

    else{

			S[k]=RRR[j];
			k++;
			i++;

    }


}


while(i<leftCount){


		S[k]=LLL[i];
		k++;
		i++;


}


while(j<rightCount){

    S[k] = RRR[j];
    k++;
    j++;

 }
}


void divide(std::string* SS,int nn){

    int i;
	int mid;


	if(nn<2){

		return;

	}

        mid = nn/2;

        std::string* LL = new std::string[mid];
        std::string* RR = new std::string[nn-mid];


        for(i=0;i<mid;i++){

                LL[i]=SS[i];

        }

        for(i=mid;i<nn;i++){

                RR[i-mid]=SS[i];

        }


        divide(LL,mid);

            divide(RR,nn-mid);

                Merge(SS,LL,mid,RR,nn-mid);

}


void bubbleSort(std::string **in,int col,int row){

            std::string* temp1;

            for(int i=row;i>1;i--){

            for(int j=0;j<row-1;j++){ if(in[j][0]>in[j+1][0]){


                    	temp1 = in[j + 1];
                    	in[j+1] = in[j];
                    	in[j] = temp1;


                    }

            }

        }

}


void selectionSort(std::string **in,int col,int row){

            std::string* temp2;

            std::string min;

            for(int i=0;i<row;i++){

                min = in[i][0];

                for(int j=i+1;j<row;j++){if(in[i][0]>in[j][0]){


                    	temp2 = in[j];
                    	in[j] = in[i];
                    	in[i] = temp2;


                    }

                }


            }

}


void insersionSort(std::string **in,int col,int row){


            std::string min;
            std::string *temp3;

            for(int i=1;i<row;i++){

                min = in[i][0];
                temp3=in[i];
int j=i;

                    while(j>0&&in[j-1][0]>min){


                        in[j]= in[j-1];
                        j= j - 1;

                    }

            in[j] = temp3;

            }


}




int main(){

            std::string str;
            std::ifstream input("HRDataset.csv");

            int col=22;
            int row=301;
            int i=0;

            std::string **in = genMat(301,22);

            std::cout<<"**Dimesion of matrix is : \n"<<row<< " "<<col<<std::endl;

            getline(input,str);
            for(int i=0;i<row;i++){

                    getline(input,str);

                    std::stringstream str2(str);

                    for(int j=0;j<col;j++){

                        str2>>in[i][j];

                    }


            }



            //bubbleSort(in,col,row);     // this code runs by bubble sort .. if u want to run code to check other sort so uncomment below calling..
            insersionSort(in,col,row);
            //selectionSort(in,col,row);

            PrintofMat(in);


            return 0;



}
