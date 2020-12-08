#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
void countSort(int *ar,int n){
	int max = *max_element(ar,ar+n);
	vector<int> vp(max+1);

	for(int i=0; i<=max; i++){
		vp[i] = 0;
	}
	for(int i=0; i<n; i++){
		++vp[ar[i]];
	}
	int i = 0,j =0;

	while(j<max+1){
		if(vp[j]>0){
			ar[i++]=j;
			vp[j]--;
		}
		else{
			j++;
		}
	}

	for(int i=0; i<n; i++){
		cout << ar[i] << " ";
	}
 }

int main(){
  int n;
  cin >> n;
  int ar[100];

  for(int i=0; i<n; i++){
	  cin >> ar[i];
  }
  countSort(ar,n);

 }
