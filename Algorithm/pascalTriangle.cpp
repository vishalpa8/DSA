#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

int factorial(int n){
    int fact = 1;

    for(int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    fast_io;

    int n = 5;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
           cout << factorial(i)/(factorial(i-j)/factorial(j)) << " ";
        }
        cout << endl;
    }


    return 0;
}