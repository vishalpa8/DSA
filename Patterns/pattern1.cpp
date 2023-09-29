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

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j <= i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}