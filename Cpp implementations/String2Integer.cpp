#include<bits/stdc++.h>
using namespace std;

int S2I(char s[], int n) {
	if(n==0 ) return 0;
	
	int smallAns = S2I(s,n-1);
	int digit = s[n-1]-'0';
	return (smallAns*10+digit);
}

int main() {
	char s[] = "12345";
	int ans = S2I(s,5);
	
	cout<<ans;
}
