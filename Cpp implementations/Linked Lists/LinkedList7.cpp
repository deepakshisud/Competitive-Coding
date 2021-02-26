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

Node* insertAtIth(Node *head, int i, int data) {
	Node *temp = head;
	Node *temp1 = NULL;
	Node *n = new Node(data);
	while(i>1) {
		temp = temp->next;
		i--;
	}
	temp1 = temp->next;
	temp->next = n;
	n->next = temp1;
	
	return head;	
}

Node* takeInput() {
	int data;
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data!=-1) {
		Node *n = new Node(data);
		if(head== NULL) {
			head = n;
			tail = n;
		} else {
			tail->next = n;
			tail = n;
		}
		cin>>data;
	}
	return head;
}

void print(Node *head) {
	Node *temp = head;
	while(temp!=NULL) {
		cout<<temp->data<<"->";
		temp = temp->next;
	}
}

int main() {
	Node *head = takeInput();
	int i, data;
	cin>>i>>data;
	head = insertAtIth(head, i, data);
	print(head);
	return 0;
}
