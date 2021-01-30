#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int key) {
	
	int s=0, e= n-1;
	while(s<=e) {
		//int mid = (s+e)/2; - might cause overflow
		
		int mid = s + (e-s)/2;
		
		if(a[mid]==key) {
			return mid;
		}
		else if(a[mid]>key) {
			e=mid-1;
		}
		else {
			s=mid+1;
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
	
	sort(a,a+n);
	int key;
	cout<<"Enter the key: ";
	cin>>key;
	
	int f;
	f = binarySearch(a,n,key);
	
	if(f==-1)
	cout<<"Key not found";
	else
	cout<<"Key found at: "<<f;
}
