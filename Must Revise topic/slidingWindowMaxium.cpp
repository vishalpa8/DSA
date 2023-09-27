#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
       deque<int> dq;
       int i;
       for(i=0; i<k; i++){  // 0,1,2
           while(!dq.empty() && arr[i] >= arr[dq.back()]) (dq.pop_back()); //6 
           dq.push_back(i);
       }

       //dq = 2
       
       vector<int> ans; ans.push_back(arr[dq.front()]); // ans = 3,
       for(; i<n; i++){
           while(!dq.empty() && dq.front() <= i-k) dq.pop_front();
           while(!dq.empty() && arr[i] >= arr[dq.back()]) dq.pop_back();
           dq.push_back(i);
           ans.push_back(arr[dq.front()]);
       }
       return (ans);
}

// vector<int> max_of_subarrays(vector<int> arr, int k) {
//         vector<int> v;
//         int n = v.size();

//         priority_queue<pair<int,int>> pq;
//         int i;
        
//         for(i=0; i<k; i++){
//             pq.push({arr[i],i});
//         }
//         v.push_back(pq.top().first);
//         for(; i < n; i++){
//             pq.push({arr[i],i});
//             while(pq.top().second <= i-k) pq.pop();
            
//             v.push_back(pq.top().first);
//         }
                
//         return v;
// }

int main(){
    fast_io;

    int k,n;
    cin >> n >> k;
    vector<int> v(n);


    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    auto ans = max_of_subarrays(v,n,k);

    for(auto i : ans){
        cout << i << " ";
    }




    return 0;
}