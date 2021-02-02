#include<bits/stdc++.h>
using namespace std;

int sod(int n) {
	if(n==0) return 0;
	
	int smallAns = sod(n/10);
	int ld = n%10;
	return smallAns+ld;
}

int main() {
	cout<<sod(12);
	return 0;
}
