#include<bits/stdc++.h>
using namespace std;

int sumArray(int a[], int n) {
	if(n==0) return 0;
	
	int smallSum = sumArray(a+1,n-1);
	
	return smallSum+a[0];
}


int main() {
	int a[] = {1,1,1,1,1};
	int ans = sumArray(a,5);
	cout<<ans;
}
