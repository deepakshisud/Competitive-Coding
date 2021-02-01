#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
	if(n==1)
		return 1;
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
	//int smallAns = fact(n-1);
	//return smallAns;
}

int main() {
	int n;
	cin>>n;
	
	int ans = fact(n);
	cout<<ans<<endl;
	
	return 0;
}
