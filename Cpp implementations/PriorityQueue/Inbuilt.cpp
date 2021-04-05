#include<bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<int> p;
	p.push(16);
	p.push(10);
	p.push(13);
	
	cout<<"Size: "<<p.size()<<endl;
	
	cout<<"Top: "<<p.top()<<endl;
	
	while(!p.empty()) {
		cout<<p.top()<<endl;
		p.pop();
	}
	return 0;
	
}
