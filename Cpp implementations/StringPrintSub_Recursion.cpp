#include<bits/stdc++.h>
using namespace std;

void printSub(string s, string o, vector<string> &v) {
	if(s.length()==0){
		v.push_back(o);
		return;
	}
	printSub(s.substr(1), o,v);
	printSub(s.substr(1), o+s[0],v);
}

int main() {
	string s;
	cin>>s;
	string o = "";
	
	
	vector<string> v;
	printSub(s,o, v);
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
}
