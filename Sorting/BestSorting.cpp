#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fi first
#define se second
#define endl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void bubbleSort(vector<int> v){
	bool isSorted = false;
	int counter = 0;
	while(!isSorted){
		for(int i=0; i<v.size()-1-counter; i++){
			isSorted = true;
			if(v[i] > v[i+1]){
				isSorted = false;
				swap(v[i],v[i+1]);
			}
		}
		counter++;
	}

	for(auto i :  v){
		cout << i << " ";
	}
	cout << endl;
}

void insertionSort(vector<int> v){
	for(int i=1; i<v.size(); i++){
		int j=i;
		while( j > 0 && v[j] < v[j-1]){
			swap(v[j],v[j-1]);
			j--;
		}	
	}

	for(auto i : v){
		cout << i << " ";
	}
	cout << endl;
}

void selectionSort(vector<int> v){
	int currentIdx = 0;

	while(currentIdx < v.size()){
		int smallestIdx = currentIdx;
		for(int i = currentIdx+1; i < v.size(); i++){
			if(v[smallestIdx] > v[i]){
				smallestIdx = i;
			}
		}
		swap(v[smallestIdx],v[currentIdx]);
		currentIdx++;
	}

	for(auto i : v){
		cout << i << " ";
	}

	cout << endl;
}

int main(){
	int n;
	cin >> n;

	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	bubbleSort(v);
	insertionSort(v);
	selectionSort(v);
	return 0;
}
