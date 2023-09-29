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

    for(int i=0; i<n; i++){
        for(int k=i; k<n-1; k++){
            cout << " ";
        }
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        print(endl);
    }



    return 0;
}