#include<bits/stdc++.h>
using namespace std;

int power(int b, int n) {
	if(n==0) return 1;
	
	int smallAns = power(b,n-1);
	
	int p = smallAns*b;
}

int main() {
	int b,n;
	cin>>b>>n;
	
	int p = power(b,n);
	cout<<p<<endl;
}
