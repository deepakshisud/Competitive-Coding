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

//taking input from tail
//eg: Input: 1 2 3 4
//Output: 1->2->3->4

Node* takeInput() {
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data!=-1) {
		Node *n = new Node(data);
		if(head==NULL) {
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
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main() {
	
	Node *head;
	head = takeInput();
	print(head);
	
	return 0;
}
