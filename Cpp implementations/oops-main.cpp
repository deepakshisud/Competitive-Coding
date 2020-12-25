#include<iostream>
#include "Student.cpp"
using namespace std;

int main() {
	Student s1;
	s1.display();
	
	Student s2;
	s2.display();
	
	Student *s3 = new Student;
	s3->display();
	
	Student s4(23);
	s4.display();
	
	Student s5(80,45);
	s5.display();	
	
	//Copy constructor 
	Student s6(s5);
	s6.display();
	
	Student s7(*s3);
	Student *s8 = new Student(*s3);
	
	//Copy assignment operator
	s6=s7;
	
	
	return 0;
}
