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

Node* findMid(Node *head) {
	Node *slow = head;
	Node *fast = head->next;
	while(fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}
	if(fast) {
		return slow->next;
	} 
	return slow;
}

Node* input() {
	int data;
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data!=-1) {
		Node* n = new Node(data);
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

int main() {
	Node *head = input();
	Node *mid = findMid(head);
	cout<<mid->data;
	
	return 0;
}
