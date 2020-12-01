#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;

void swap(int* a ,int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int ar[],int l,int h)
{
	int pivot = ar[h];
	int i = (l-1);

	for(int j=l; j<=h-1; j++)
	{
		if(ar[j] < pivot)
		{
			i++;
			swap(&ar[i],&ar[j]);
		}
	}
	swap(&ar[i+1],&ar[h]);
	return i+1;
}

void quicksort(int ar[],int l , int h)
{
	if( l < h){
		int p = partition(ar,l,h);

		quicksort(ar,l,p-1);
		quicksort(ar,p+1,l);
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

	quicksort(ar,0,n-1);


	for(int i=0; i<n; i++)
	{
		cout << ar[i] << " ";
	}
    cout << endl;
	return 0;
}

