#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	
	for(int i=0;i<100;i++) {
		cout<<"Capacity"<<v.capacity()<<endl;
		v.push_back(i+1);
		cout<<"Size"<<v.size()<<endl;
	}
	
	cout<<endl;
	
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
}
