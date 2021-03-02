#include<bits/stdc++.h> 
using namespace std;

class Stack {
	private:
		int *arr;
		int nextIndex;
		int capacity;
	
	public:
		Stack() {
			arr = new int[100];
			nextIndex = 0;
			capacity = 100;
		}
		Stack(int cap) {
			arr = new int[cap];
			nextIndex = 0;
			capacity = cap;
		}
		int size() {
			return nextIndex;
		}
		bool isEmpty() {
			return nextIndex==0;
		}
		void push(int data) {
			if(nextIndex == capacity){
				cout<<"Stack full"<<endl;
				return;
			}
			arr[nextIndex] = data;
			nextIndex++;
		}
		void pop() {
			if(isEmpty()) {
				cout<<"Stack empty"<<endl;
				return;
			}
			nextIndex--;
		}
		int top() {
			if(isEmpty()) {
				cout<<"Stack empty"<<endl;
				return INT_MIN;
			}
			return arr[nextIndex-1];
		}
};


int main() {
	Stack s(4);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
		
	
	return 0;
}
