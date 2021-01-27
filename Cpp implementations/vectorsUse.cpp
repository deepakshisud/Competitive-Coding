#include<iostream>
#include<vector>
using namespace std;

int main() {
	
	vector<int> v; //static
	
	vector<int> *vp = new vector<int> (); // dynamic
	
	//inserting
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	
	//change the elements
	
	v[1] = 100;
	
	//access elements
	
	cout<<v[0]<<" ";
	cout<<v[1]<<" ";
	cout<<v[2]<<endl;
	
	v.push_back(50);
	v.push_back(60);
	
	cout<<v.at(4)<<endl;
	// cout<<v.at(6)<<endl; //error
	
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	
	
}
