#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int v[], int n ) {
	for(int i=0; i<n-2;i++) {
		int smallest = i;
		for(int j=i+1; j<=n-1; j++) {
			if(v[j]<v[smallest]) {
				smallest = j;
			}
		}
		if(v[i]>v[smallest]) {
			swap(v[i], v[smallest]);
		}
	}
}


int main() {
	int n;
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	
	selectionSort(v,n);
	
	cout<<"Selection sort:"<<endl;
	for(int i=0;i<n;i++) {
		cout<<v[i]<<" ";
	}
}
