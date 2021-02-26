#include<bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
	
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

int length(Node *head) {
	int l=0;
	Node *temp = head;
	while(temp!=NULL) {
		l++;
		temp=temp->next;
	}
	return l;
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
	cout<<length(head)<<endl;
	return 0;
}
