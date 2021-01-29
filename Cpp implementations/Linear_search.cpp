#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int key) {
	for(int i=0;i<n;i++) {
		if(a[i]==key) {
			return i;
		}
	}
	
	return -1;
}



int main() {
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"Enter the number to be searched: ";
	int value;
	cin>>value;
	
	int pos = linearSearch(a,n, value);
	
	if(pos==-1)
	cout<<"Value not found";
	else
	cout<<"The value is present at index "<<pos;
	
	return 0;
}
