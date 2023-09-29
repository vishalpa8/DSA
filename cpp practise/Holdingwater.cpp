#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

int main(){
    fast_io;

    int arr[9] = {0,1,2,0,0,3,1,0,3};

    int n = sizeof(arr)/sizeof(arr[0]);
    int left[9];
    int right[9];
    left[0] = arr[0];
    right[n-1] = arr[n-1];

    // 0 1 2 2 2 3 3 3 3
    // 3 3 3 3 3 3 3 3 3

    for(int i=1; i<n; i++){
        if(arr[i] > left[i-1]){
            left[i] = arr[i];
        }else{
            left[i] = left[i-1];
        }
    }

    
    for(int i=n-1; i>=0; i--){
        if(arr[i] > right[i+1]){
            right[i] = arr[i];
        }else{
            right[i] = right[i+1];
        }
    }

    int total = 0;

    for(int i=0; i<n; i++){
        total += min(left[i],right[i])-arr[i];
    }

    cout << total << " ";

    return 0;
}