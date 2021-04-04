#include<bits/stdc++.h>
using namespace std;

int main() {
	unordered_map<string, int> mymap;
	
	mymap["abc"] = 1;
	mymap["def"] = 2;
	mymap["abc2"] = 3;
	mymap["abc3"] = 4;
	mymap["abc4"] = 5;
	
	for(unordered_map<string, int>::iterator it = mymap.begin(); it!=mymap.end(); it++){
		cout<<"key: "<<it->first<<" value: "<<it->second<<endl;
	}
	

}
