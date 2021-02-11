#include<bits/stdc++.h>
using namespace std;

int toh(int n) {
	if(n<1) return 0;
	if(n==1) return 1;
	
	return toh(n-1) + 1 + toh(n-1);
}

int main() {
	int n;
	cin>>n;
	cout<<toh(n)<<endl;
}
