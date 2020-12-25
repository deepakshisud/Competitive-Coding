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
	
	return 0;
}
