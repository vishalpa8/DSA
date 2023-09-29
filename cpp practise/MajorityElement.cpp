#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

//Moores's Voting Algo
int main(){
    fast_io;

    int arr[] = {7,2,7,7,7,7,2,2};
    int major = 0;
    int count = 1;
    int n = 8;

    for(int i=1; i<n; i++){
        if(arr[major] == arr[i]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            major = i;
            count = 1;
        }
    }

    cout << arr[major] << endl;
    count = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == arr[major]){
            count++;
        }
    }
    if(count > n/2){
        cout << "element is in Majority: " << arr[major] << " ";
    }



    return 0;
}