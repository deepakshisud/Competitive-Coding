#include<iostream>
using namespace std;

class Product {
	public:
		int id;
		int weight;
		char name[50];
};

int main() {
	//creating objects statically
	Product s1,s2;
	
	s1.id = 10;
	cout<<s1.id;
	//creating objects dynamically 
	
	Product* s3;
	return 0;
}
