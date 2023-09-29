#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(n) for(int i=0; i<(n); i++)
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void printTheBinary(int n, int k, int arr[]){
    if(n == k){
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    if(arr[k-1] == 0){
        arr[k] = 0;
        printTheBinary(n,k+1,arr);
        arr[k] = 1;
        printTheBinary(n,k+1,arr);
    }else{
        arr[k] = 0;
        printTheBinary(n,k+1,arr);
    }

}

int main(){
    fast_io;

    int n;
    cin >> n;
    int arr[n];
    arr[0] = 0;
    printTheBinary(n,1,arr);
    arr[0] = 1;
    printTheBinary(n,1,arr);



    return 0;
}