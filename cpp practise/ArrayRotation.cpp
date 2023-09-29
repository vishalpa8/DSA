#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void reverse(int arr[], int start, int end){
        while(start < end){
            swap(arr[start++],arr[end--]);
        }
}

// Traveral Algo

int main(){
    fast_io;

    int arr[6] = {1,2,3,4,5,6};
    int k = 2;
    int n = 6;

    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);


    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }



    return 0;
}