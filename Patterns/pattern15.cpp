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

    int n=5;
    // take(n);

    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int k=i; k<n; k++){
            cout << " ";
        }
        for(int j=0; j<=i; j++){
            cout << ch;
            ch += 1;
        }
        print(endl);
    }




    return 0;
}