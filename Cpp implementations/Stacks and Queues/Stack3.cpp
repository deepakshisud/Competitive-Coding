#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Stack{
	T *arr;
	int nextIndex;
	int capacity;
	
	public:
		Stack() {
			capacity = 4;
			arr = new T[capacity];
			nextIndex = 0;
		}
		
		int size() {
			return nextIndex;
		}
		
		bool isEmpty() {
			return nextIndex==0;
		}
		
		void push(T ele) {
			if(nextIndex==capacity) {
				T *newArr = new T[2*capacity];
				for(int i=0; i<capacity; i++) {
					newArr[i] = arr[i];
				}
				delete arr;
				arr = newArr;
				capacity = 2*capacity;
			}
			arr[nextIndex] = ele;
			nextIndex++;
		}
		
		void pop() {
			if(isEmpty()) {
				cout<<"Stack empty"<<endl;
				return;
			}
			--nextIndex;
		}
		
		T top() {
			if(isEmpty()) {
				cout<<"Stack empty"<<endl;
				return 0;
			}
			return arr[nextIndex-1];
		}
		
};

int main() {
	Stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	s.pop();
	cout<<s.top();
	
	
	return 0;
}
