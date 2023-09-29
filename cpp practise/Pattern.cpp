#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(n) for(int i=0; i<(n); i++)
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void printThePattern(int n){
    cout << n << " ";
    if(n <= 0){
        return;
    }
    printThePattern(n-5);
    cout << n << " ";
}

int main(){
    fast_io;

    int n;
    cin >> n;
    bool flag = false;

    printThePattern(n);


    return 0;
}