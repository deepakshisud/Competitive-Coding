#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Node {
	public:
		T data;
		Node<T> *next;
		
		Node(T data) {
			this->data = data;
			this->next = NULL;
		}
};
template<typename T>
class Stack{
	Node<T> *head;
	T stackSize;
	
	public:
		Stack() {
			this->head = NULL;
			this->stackSize = 0;
		}
		
		int size() {
			return stackSize;
		}
		
		bool isEmpty() {
			return stackSize==0;
		}
		
		void push(T data) {
			Node<T> *n = new Node<T>(data);
			if(!head) {
				 head = n;
			} else {
				n->next = head;
				head = n;
			}
			stackSize++;
		}
		
		void pop() {
			if(!head) {
				cout<<"Stack is empty"<<endl;
				return;
			}
			Node<T> *n = head;
			head = head->next;
			delete n;
			--stackSize;
		}
		
		T top() {
			if(!head) {
				cout<<"Stack is empty"<<endl;
				return 0;
			}
			return head->data;
		}
};

int main() {
	Stack<int> s;
	s.push(10);
	s.push(20);
	
	cout<<s.top()<<endl;
	
	s.push(30);
	
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	cout<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;
	
	s.pop();
	cout<<s.top()<<endl;
	
	return 0;
}
