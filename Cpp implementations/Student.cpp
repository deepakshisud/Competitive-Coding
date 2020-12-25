#include<iostream>
using namespace std;

class Student {
	int age;
	
	public :
		
		// default constructor
		Student () {
			cout<<"Constructor called"<<endl;
		}
		
		//parameterized constructor
		Student(int rollNumber) {
			cout<<"Constructor 2 called"<<endl;
			this->rollNumber = rollNumber; //mandatory to use this 
		}
		
		int rollNumber;
		
		Student(int a, int r) {
			cout<<"Constructor 3 called"<<endl;
			age = a;
			rollNumber = r;
		}
		void display() {
			cout<<age<<" "<<rollNumber<<endl;
		}
		
		int getAge() {
			return age;
		}
		
		int setAge(int a) {
			age = a;
		}
};
