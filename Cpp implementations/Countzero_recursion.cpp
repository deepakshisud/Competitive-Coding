#include<bits/stdc++.h>
using namespace std;

int countz(int n) {
	
	if(n==0) return 0;
	
	
	int smallAns = countz(n/10);
	
	if(n%10 == 0) {
		return smallAns+1;
	}
	else return smallAns;
}

int main() {
	cout<<countz(10);
	return 0;
}
