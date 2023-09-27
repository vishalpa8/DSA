#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

int factorial(int n){
                    // 
    if( n == 1 || n == 0){
        return 1;
    }

    return n * factorial(n-1);
}


int main(){
    fast_io;

    int n = 5;
    int r = 3;

    int answer = factorial(n)/(factorial(n-r) * factorial(r));    
    cout << answer;

    return 0;
}