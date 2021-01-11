#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long ll; 
#define fi first
#define se second
#define endl '\n'
#define sf(n) scanf("%d",&n);
#define pf(n) printf("%d\n",n);
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
	fast_io;
	
	int n , m;
	cin >> n >> m;
	vector<pair<int,int>> v;

	for(int i=0; i<n; i++){
		int num,num1;
		cin >> num >> num1;
		v.push_back(make_pair(num1,num));
	}
//	sort(v.begin(),v.end());
	vector<pair<double,int>> v1;
	for(auto it : v){
		double num = (double)it.se/it.fi;
		v1.push_back(make_pair(num,it.fi));	
	}
	sort(v1.rbegin(),v1.rend());

	double ans = 0.0;
	int an  = 0;
	
	for(auto it : v1){
		if(an+it.se<= m){ 
			ans += it.first*it.se;
			an += it.se;
		}
		else{
			int num = 0;
			num = m - an;
			ans += (it.first * it.second) * ((double) num / double(an));
		}
	}	
	cout << ans << endl;
	return 0;

}
