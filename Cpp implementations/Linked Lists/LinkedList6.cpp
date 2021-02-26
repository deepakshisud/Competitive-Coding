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

void printIthNode(Node *head, int i) {
	Node *temp = head;
	while(i-- && temp) {
		temp = temp->next;
	}
	if(temp) cout<<temp->data<<endl;
	else cout<<"-1"<<endl;
	return;
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

int main() {
	Node *head = takeInput();
	int i;
	cin>>i;
	printIthNode(head, i);
	return 0;
}
