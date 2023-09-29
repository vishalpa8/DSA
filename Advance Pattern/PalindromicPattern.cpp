#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 5;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << j << " ";
        }
        for(int k=2; k<=i; k++){
            cout << k << " ";
        }
        cout << endl;
    }


return 0;
}