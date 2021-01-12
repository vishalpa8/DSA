#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll; 
#define endl '\n'
#define sf(n) scanf("%d",&n);
#define pf(n) printf("%d\n",n);
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)


int main()
{
	fast_io;
	
	int n;
	cin >> n;
	int mx = 0;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		int num1,num2;
		sf(num1);
		sf(num2);
		mx = max(mx,num2);
		v.push_back(make_pair(num1,num2));
	}	
	sort(v.rbegin(),v.rend());
	vector<int>v1(mx);
	
	for(auto it : v){
		if(!v1[it.second-1]){
			v1[it.second-1] = it.first;
		}
		else{
			int i = it.second-2;
			while(i!=-1){
				if(!v1[i]){
					v1[i] = it.first;
					break;
				}
				i--;
			}
		}
	}
	int sum = 0;
	for(auto i : v1){
		sum += i;
	}
	cout << sum << endl;
	
	return 0;

}
