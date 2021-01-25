#include<iostream>
#include "DynamicArray.cpp"
using namespace std;

int main() 
{
	DynamicArray d1; //default constructor called
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.add(50);
	d1.add(60);
	
	cout<<d1.get(3)<<endl;
	
	d1.print();
	
	DynamicArray d2(d1); //copy constructor - creates shallow copy
	
	DynamicArray d3;
	d3 = d1; //copy assignment operator called - also creates shallow copy
	
	d1.add(100,0);
	d1.print();
	d2.print();
	d3.print();
	
	return 0;
}
