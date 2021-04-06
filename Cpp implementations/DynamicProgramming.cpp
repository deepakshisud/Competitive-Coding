#include<bits/stdc++.h>
using namespace std;


int recursiveF(int n) {
	if(n==1) {
		return 0;
	}
	
	int x = recursiveF(n-1);
	int y, z;
	if(n%2==0) {
		y = recursiveF(n/2);
	} else {
		y = INT_MAX;
	}
	
	if(n%3==0) {
		z = recursiveF(n/3);
	} else {
		z = INT_MAX;
	}
	
	int ans = min(x,min(y,z));
	
	return ans+1;
}

int memorizationF(int n, int *arr) {
	if(n==1) {
		return 0;
	}
	
	if(arr[n]!=0) {
		return arr[n];
	}
	
	int x = memorizationF(n-1, arr);
	int y, z;
	if(n%2==0) {
		y = memorizationF(n/2, arr);
	} else {
		y = INT_MAX;
	}
	
	if(n%3==0) {
		z = memorizationF(n/3, arr);
	} else {
		z = INT_MAX;
	}
	
	int ans = min(x,min(y,z));
	arr[n] = ans+1;
	return ans+1;
}

int bottomUpF(int n) {
	int *a = new int[n+1];
	a[0] = 0;
	a[1] = 0;
	int x, y;
	for(int i=2; i<=n; i++) {
		if(i%2==0) {
			x = a[i/2];
		} else {
			x = INT_MAX;
		}
		if(i%3==0) {
			y = a[i/3];
		} else {
			y = INT_MAX;
		}
		a[i] = min(a[i-1], min(x,y)) + 1;
	}
	int ans = a[n];
	delete []a;
	return ans;
	
}

int main() {
	int n;
	cin>>n;
	int arr[n+1] = {0};
	int ans3 = bottomUpF(n);
	cout<<"Bottom up: "<<ans3<<endl;
	int ans2 = memorizationF(n, arr);
	cout<<"Memorization: "<<ans2<<endl;
	int ans1 = recursiveF(n);
	cout<<"Recursion: "<<ans1<<endl;
}
