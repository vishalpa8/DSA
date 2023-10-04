#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(a,n) for(int i=a; i<(n); i++)
#define print(value) cout << value
#define size(a) a.size()
#define take(value) cin >> value
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

int solve(int arr[] , int n, int m){
    int count = 0;
    int mx = 0, mn = INT_MAX, ans = INT_MAX;

    for(int i=0; i<n-2; i++){
        mx = max(arr[i],mx);
        mn = min(arr[i],mn);
        count++;

        if(count == 3){
            print(mx) << " " << mn << endl;
            int value = mx - mn;
            ans = min(value,ans);
            mx = 0;
            mn = INT_MAX;
            count = 1;
        }
    }

    return ans;
}

int main(){
    fast_io;

    int n,m;
    cin >> n >> m;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << solve(arr,n,m);


    return 0;
}