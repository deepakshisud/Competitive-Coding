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
	
	d1.print();
	return 0;
}
