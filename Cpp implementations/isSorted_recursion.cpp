#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n) {
	if(n==0 || n==1) return true;
	
	if(a[0]>a[1]) return false;
	
	bool smallAns = isSorted(a+1,n-1);
	return smallAns;
	
}

int main() {
	int a[] = {1,2,6,4,5};
	if(isSorted(a,5)) {
		cout<<"Sorted";
	}
	else cout<<"Not sorted";
	
	return 0;
}
