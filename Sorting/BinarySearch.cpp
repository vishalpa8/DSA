#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int binarysearch(int *ar,int key,int n){
	int mid = 0;
    for(int b = n/2; b >= 1; b/=2){
	   while(mid+b < n && ar[mid+b] <=key) mid+=b;
   }
   if(ar[mid]==key){
	   return mid;
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
