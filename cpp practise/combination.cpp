#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(n) for(int i=0; i<(n); i++)
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void combine(int arr[],string res,int n,int k,int index){
    if(k == 0){
        cout << res << endl;
        return;
    }

     for(int i=index; i<n; i++){
        combine(arr,res+to_string(arr[i])+" ",n,k-1,i+1);
    }
}

int main(){
    fast_io;

    int n,k;
    cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    combine(arr,"",n,k,0);
   




    return 0;
}