#include<bits/stdc++.h> 
using namespace std;

class Stack {
	private:
		int *arr;
		int nextIndex;
		int capacity;
	
	public:
		Stack() {
			arr = new int[4];
			nextIndex = 0;
			capacity = 4;
		}
		int size() {
			return nextIndex;
		}
		bool isEmpty() {
			return nextIndex==0;
		}
		void push(int data) {
			if(nextIndex == capacity){
				int *newArr = new int[2*capacity];
				for(int i=0; i<capacity; i++) {
					newArr[i] = arr[i];
				}
				delete []arr;
				arr = newArr;
				capacity = 2*capacity;
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
	Stack s;
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
