#include<bits/stdc++.h>
using namespace std;

void lastIndex(int a[], int n, int k, int i) {
	if(i==n) return;
	
	if(a[i]==k) cout<<i<<endl;
	
	lastIndex(a,n,k,i+1);
}

int main() {
	
	int a[] = {2,3,1,2,3};
	
	lastIndex(a,5,2,0);
}
