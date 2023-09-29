#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(n) for(int i=0; i<(n); i++)
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

int main(){
    fast_io;


    int n,k;
    cin >> n >> k;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    loop(n){
        cout << arr[i] << " ";
    }
    int sum = 0,mx = -1;

    for(int i=0; i<k; i++){
        sum += arr[i];
    }
    mx = sum;
    for(int i=k; i<n; i++){
        sum += arr[i]-arr[i-k];
        mx = max(sum,mx);
    }

    cout << mx << endl;

    return 0;
}