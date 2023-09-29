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

        for(int k=0; k<i; k++){
            cout << " ";
        }
        for(int j=n-1; j>=0; j--){
         char ch = 'A'+j;
            if(j >= i){
                cout << ch;
            }
        }
        print(endl);

    }

    for(int i=0; i<n; i++){
        for(int k=0; k<=i; k++){
            cout << " ";
        }
        for(int j=n-1; j>i; j--){
            char ch = 'A'+j;
            print(ch);
        }
        print(endl);
    }



    return 0;
}