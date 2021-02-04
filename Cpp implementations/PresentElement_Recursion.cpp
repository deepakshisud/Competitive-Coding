#include<bits/stdc++.h>
using namespace std;

bool present(int a[], int n, int e) {
	if (n==0) return false;
	if(a[0]==e) return true;
	bool smallAns = present(a+1,n-1,e);
	return smallAns;
}

int main() {
	int a[] = {1,2,6,4,0};
	
	if(present(a,5,3)) cout<<"present";
	else cout<<"Not present";
}
