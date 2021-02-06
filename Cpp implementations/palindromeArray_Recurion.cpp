#include<bits/stdc++.h>
using namespace std;

bool palindrome(int a[], int i, int k) {
	if(i > k) return true;
	
	if(a[i]==a[k]) return palindrome(a,i+1,k-1);
	else return false;
}

int main() {
	
	int a[] = {1,5,3,2,1};
	
	if(palindrome(a,0,4)) cout<<"palindrome";
	else cout<<"no palindrome";
}
