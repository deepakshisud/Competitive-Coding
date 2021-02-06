#include<bits/stdc++.h>
using namespace std;

void count(int a[], int n, int k, int i, int &ans) {
	if(i==n) return;
	
	if(a[i]==k) ans++;
	
	count(a,n,k,i+1,ans);
}

int main() {
	int a[] = {1,2,1,3,2};
	
	int ans =0;
	count(a,5,1,0,ans);
	
	cout<<ans;
}
