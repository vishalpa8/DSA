#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll; 
#define fi first
#define se second
#define endl '\n'
#define sf(n) scanf("%d",&n);
#define pf(n) printf("%d\n",n);
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
void toh(int n , int a, int b, int c){
	 if(n>0){
		toh(n-1,a,c,b);
		cout << a << " " << c << endl;
		toh(n-1,b,a,c);
	}
}
int main()
{
	fast_io;
	
	int n;
	cin >> n;
	toh(n,1,2,3);


	return 0;

}
