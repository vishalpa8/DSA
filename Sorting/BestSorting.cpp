#include<bits/stdc++.h>
using namespace std;

void selectionsort(){
	int n;
	cin >> n;

	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	int currentIdx = 0;

	while(currentIdx < n){
		int smallestIdx = currentIdx;

		for(int i=currentIdx+1; i<n; i++){
			if(v[smallestIdx] > v[i]){
				smallestIdx = i;
			}
		}
		swap(v[currentIdx],v[smallestIdx]);
		currentIdx++;
	}

	for(auto i :  v){
		cout << i << " ";
	}
}

void insertionsort(){
	int n;
	cin >> n;
	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	for(int i=1; i<n; i++){
		int j = i-1;
		int key = v[i];
		while(j >= 0 && v[j] > key){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = key;
	}

	for(auto i : v){
		cout << i << " ";
	}
}

void bubblesort(){
	
	int n;
	cin >> n;
	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	for(int i=1; i<n; i++){
		bool is_sorted = true;
		for(int j=0; j<n; j++){
			if(v[j] > v[j+1]){
				swap(v[j],v[j+1]);
				is_sorted = false;
			}
		}
		if(is_sorted) break;
	}

	for(auto i : v){
		cout << i << " ";
	}
}

int main(){
	insertionsort();
	selectionsort();
	bubblesort();
	return 0;
}
