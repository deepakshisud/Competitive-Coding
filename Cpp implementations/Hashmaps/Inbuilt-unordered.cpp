#include<iostream>
#include<string>
#include <unordered_map>
using namespace std;
int main() {
	
	unordered_map<string, int> mymap;
	
	
	//Inserting
	
	pair<string,int> p("abc", 1);
	mymap.insert(p);
	
	mymap["bed"] = 3;
	
	
	//accessing
	cout<<mymap["abc"]<<endl;
	
	cout<<mymap.at("abc")<<endl;
	
	
	//check size of map
	cout<<"Size: "<<mymap.size()<<endl;
	
	//check presence of key
	
	if(mymap.count("abc")>0) {
		cout<<"present";
	} else {
		cout<<"not present";
	}
	
	//delete
	
	mymap.erase("abc");
	  
	return 0;
}
