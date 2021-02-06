#include<bits/stdc++.h>
using namespace std;

int firstIndex(int a[], int n, int k, int i) {
	if(n==i) return -1;
	
	if(a[i]==k) return i; 
	
	return firstIndex(a,n,k,i+1);
	
}

int main() {
	int a[] = {1,2,3,5,3};
	
	cout<<firstIndex(a,5,3,0);
}
