#include<bits/stdc++.h>
using namespace std;

void kSortedArray(vector<int> &input, int n, int k) {
	priority_queue<int> pq;
	
	for(int i=0; i<k; i++) {
		pq.push(input[i]);
	}
	int s = 0;
	for(int i=k; i<n; i++) {
		input[s] = pq.top();
		pq.pop();
		s++;
		pq.push(input[i]);
	}
	
	while(!pq.empty()) {
		input[s] = pq.top();
		pq.pop();
		s++;
	}
}

int main() {
	
	vector<int> input;
	int n, k;
	cout<<"enter the no of element: ";
	cin>>n;
	int e;
	cout<<"enter the array: "<<endl;
	for(int i=0; i<n; i++) {
		cin>>e;
		input.push_back(e);
	}
	cout<<"enter the value of k: ";
	cin>>k;
	kSortedArray(input, n, k);
	cout<<"the sorted array: ";
	for(int i=0; i<n; i++){
		cout<<input[i]<<" ";
	}
}
