#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(a,n) for(int i=a; i<(n); i++)
#define print(value) cout << value
#define size(a) a.size()
#define take(value) cin >> value
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
void nextPermutation(vector<int>& nums) {
        int n = size(nums), k, l;

        for(k = n - 2; k >= 0; k--){
            if(nums[k] < nums[k+1]){
                break;
            }
        }
        if( k < 0){
            reverse(nums.begin(),nums.end());
        }else{
            for(l=n-1; l>k; l--){
                if(nums[l] > nums[k]){
                    break;
                }
            }
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1, nums.end());
        }

        
    }

int main(){
    fast_io;

    vector<int> v{1,2,3};

    nextPermutation(v);

    for(auto a : v){
        cout << a << " ";
    }




    return 0;
}