#include<bits/stdc++.h>
using namespace std;


int main(){
    int row=5,col=4;


    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==0 || i == row-1 || j == 0 || j == col-1 ){
                cout << "*";
            }
            else{
                cout << " ";
            }            
        }
        cout << "\n";
    }

    /*
        * * * * 
        *     *
        *     *
        *     *
        * * * *
    */ 



}