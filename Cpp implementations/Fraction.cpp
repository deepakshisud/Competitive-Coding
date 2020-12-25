#include<iostream>
using namespace std;

class Fraction {
	int numerator;
	int denominator;
	
	public:
		Fraction(int numerator, int denominator) {
			this->numerator = numerator;
			this->denominator = denominator;
		}
		
		void print() {
			cout<<numerator<<"/"<<denominator<<endl;
		}
		
		//Fraction f2 - copy constructor is called
		//adding & and const refers to the same place in memory without m
		void add(Fraction const &f2)  {
			int lcm = this->denominator * f2.denominator;
			int x = lcm/denominator;
			int y = lcm/f2.denominator;
			
			int num = x*numerator + y*f2.numerator;
			
			//store in this
			
			this->numerator = num;
			this->denominator = lcm;
			
			simplify();
			
		}
		
		void simplify() {
			int gcd = 1;
			int j = min(numerator, denominator);
			for(int i =1;i<j;i++) {
				if(numerator%i == 0 && denominator%i==0)
					gcd = i;
			}
			this->numerator = numerator / gcd;
			this->denominator = denominator/ gcd;
		} 
};
