#include<bits/stdc++.h>
using namespace std;

int nod(int n) {
	if(n==0) return 0;
	int sm = nod(n/10);
	return sm+1;
}

int main() {
	int n;
	cin>>n;
	
	int ans = nod(n);
	cout<<ans<<endl;
}
