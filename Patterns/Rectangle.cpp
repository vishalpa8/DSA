#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,m;

    cout << "Enter No of rows: ";
    cin >> n;

    cout << "Enter No of columns: ";
    cin >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }

}