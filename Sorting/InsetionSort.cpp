#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;

void swap(int* a ,int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void insertionsort(int ar[],int n)
{
	int j,x;
  for(int i=1; i<n; i++){
	   j= i-1;
       x = ar[i];

	   while(j>=0&& ar[j] > x){
		   ar[j+1] = ar[j];
		    j--;
	   }
	   ar[j+1] = x;
  }
}


int main()
{
	int n;
	
	int ar[100];

	cin >> n;

	for(int i=0; i<n; i++)
	{
		cin >> ar[i];
	}

	insertionsort(ar,n);


	for(int i=0; i<n; i++)
	{
		cout << ar[i] << " ";
	}
    cout << endl;
	return 0;
}

