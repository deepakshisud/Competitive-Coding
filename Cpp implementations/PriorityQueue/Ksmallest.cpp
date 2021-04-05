#include<bits/stdc++.h>
using namespace std;

void kSmallest(int *input, int n, int k) {
	priority_queue<int> pq;
	for(int i=0; i<k; i++) {
		pq.push(input[i]);
	}
	
	for(int i=k; i<n; i++) {
		if(input[i] < pq.top()) {
			pq.pop();
			pq.push(input[i]);
		}
	}
	
	while(!pq.empty()) {
		cout<<pq.top()<<" ";
		pq.pop();
	}
}

int main() {
	int a[] = {5,6,9,12,13,2};
	int k = 3;
	kSmallest(a,6,3);
}
