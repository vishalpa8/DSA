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
    cin >> n;

    for(int i=n; i>=0; i--){    // i=3,

        for(int k=i; k>0; k--){
            cout << " ";
        }
        for(int j=n-1; j>=0; j--){  // j = 3, j >= i ; j--
            if(j >= i){
                print(j) << " ";
            }
        }
        print(endl);
    }

    for(int i=0; i<n; i++){
        for(int k=0; k<=i; k++){
            cout << " ";
        }
        for(int j=n-1; j>i; j--){
            cout << j << " ";
        }
        print(endl);
    }



    return 0;
}