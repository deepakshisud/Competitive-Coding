#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	
	//Statically create string
	string s = "abc";
	cout<<s<<endl;
	
	//Dynamically create string with the help of pointers
	
	string *sp = new string;
	*sp = "mno";
	cout<<sp<<endl; //gives the address
	cout<<*sp<<endl; //gives the value
	
	//using Vectors
	vector<string> v;
	v.push_back(s);
	v.push_back("hello");
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
		sort(v[i].begin(),v[i].end());
		cout<<v[i]<<endl;
	}
	
	string s3;
	getline(cin,s3);
	cout<<s3<<endl;
	
	return 0;
}
