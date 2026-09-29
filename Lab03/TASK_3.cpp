#include<iostream>
using namespace std;
int main(){
    int matrix_A[3][3]={{1,2,3}, {4,5,6},{7,8,9}};
    int matrix_B[3][3]= {{9,8,7},{6,5,4},{3,2,1}};
    int matrix_C[3][3];
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix_C[i][j]=matrix_A[i][j]+matrix_B[i][j];
        }
    }
    cout<<"MATRIX A:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix_A[i][j]<<" ";
        
        }
    cout<<endl;
    }
    cout<<"MATRIX B:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix_B[i][j]<<" ";
        
        }
    cout<<endl;
    }
    cout<<"THE SUM OF MATRIX A & B IS:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrix_C[i][j]<<" ";
        
        }
    cout<<endl;
    }
    
    return 0;
}