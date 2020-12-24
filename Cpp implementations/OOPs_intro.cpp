#include<iostream>
using namespace std;

class Product {
	public:
		int id;
	private:
		int weight;
	public: 
		void display() {
			cout<<"The id is "<<id<<endl;
		}
		
		int getWeight() {
			cout<<"The weight is: "<<weight<<endl;
		}

};

int main() {
	//creating objects statically
	Product s1,s2;
	
	s1.id = 10;
	s1.display();
	s1.getWeight();
	//creating objects dynamically 
	
	Product* s3;
	
	
	s3->id= 30;
	
	s3->display();
	
	s3->getWeight();
	
	
	return 0;
}
