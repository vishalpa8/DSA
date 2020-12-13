#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int binarysearch(int *ar , int key,int n){
	int a = 0, b = n-1;
   
	while(a<=b){
		int mid = (a+b)/2;
		if(ar[mid]==key){
			return mid;
		}

		if(ar[mid] > key) b = mid-1;
		else a = mid+1;
	}
	return -1;
}

int main(){
   int n;
   cin >> n;

   int ar[10];
   cout << "Enter the " << n << " Sorted Numbers : \n";
   for(int i=0; i<n; ++i){
	   cin >> ar[i] ; // Enter the Sorted Value.
   }
  
   cout << "Enter the Number you want to find : ";
   int key; 
   cin >> key;

   int result =  binarysearch(ar,key,n);

   cout << "Number Present at " << result << " Postition\n"; 
   return 0;
}
