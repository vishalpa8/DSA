#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(a,n) for(int i=a; i<(n); i++)
#define print(value) cout << value
#define size(a) a.size()
#define take(value) cin >> value
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

int main(){
    fast_io;

    int n;
    take(n);

    for(int i=n-1; i>=0; i--){
        for(int k=i; k>0; k--){
            print(" ");
        }
        for(int j=i; j<n; j++){
            print(j);
        }
        print(endl);
    }
    for(int i = 1; i < n; i++){
        for(int k = 1; k <= i; k++){
            cout << " ";
        }
        for(int j = i; j < n; j++){
            print(j);
        }
        print(endl);
    }


    return 0;
}