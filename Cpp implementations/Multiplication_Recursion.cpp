#include<bits/stdc++.h>
using namespace std;

int multiplication(int m, int n) {
	if(n==0)
		return 0;
	
	int smallAns = multiplication(m, n-1);
	
	return m+smallAns;
}

int main() {
	cout<<multiplication(2,3);
	return 0;
	
}
