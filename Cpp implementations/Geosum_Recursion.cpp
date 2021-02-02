#include<bits/stdc++.h>
using namespace std;

double geosum(int n) {
	if(n==0) return 1;
	
	double smallSum = geosum(n-1);
	
	double s = smallSum + (1.0/pow(2,n));
	
	return s;
}

int main() {
	cout<<geosum(2);
	
	return 0;
}
