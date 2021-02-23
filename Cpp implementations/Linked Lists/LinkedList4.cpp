#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

Node* takeInput() {
	int data;
	cin>>data;
	Node *head;
	Node* tail;
	while(data!=-1) {
		
		Node *n = new Node(data);
		
		if(head==NULL) {
			head = n;
			tail = n;
		} else {
			Node *temp = head;
			head = n;
			head->next = temp;
		}
		cin>>data;
	}
	return head;
}

void print(Node *head) {
	Node *temp = head;
	while(temp!=NULL) {
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main() {
	
	Node *head = takeInput();
	print(head);
	return 0;
}
