#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int ar[],int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++){
			if(ar[j] > ar[j+1])
			{
				swap(&ar[j],&ar[j+1]);
			}
		}
	}
}

int main()

{
	int n;
	cin >> n;
	int ar[100];


	for(int i=0; i<n; i++)
	{
		cin >> ar[i];
	}

	bubblesort(ar,n);


	for(int i=0; i<n; i++)
	{
		cout << ar[i] << " ";
	}

    cout << endl;

	return 0;

	
}
