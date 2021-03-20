#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BTNode{
	public:
		T data;
		BTNode* left;
		BTNode* right;
		
		BTNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
		
		~BTNode() {
			delete left;
			delete right;
		}
};

BTNode<int>* takeInputLevel() {
	int rootData;
	cout<<"Enter root data: ";
	cin>>rootData;
	BTNode<int>* root = new BTNode<int>(rootData);
	queue<BTNode<int>*> q;
	q.push(root);
	while(q.size()) {
		BTNode<int>* f = q.front();
		q.pop();
		int leftData;
		cout<<"Enter the left child of "<<f->data<<" : ";
		cin>>leftData;
		if(leftData == -1) f->left = NULL; 
		else {
			BTNode<int>* leftNode = new BTNode<int>(leftData);
			q.push(leftNode);
			f->left = leftNode;
		}
		int rightData;
		cout<<"Enter the right child of "<<f->data<<" : ";
		cin>>rightData;
		if(rightData == -1) f->right = NULL; 
		else {
			BTNode<int>* rightNode = new BTNode<int>(rightData);
			q.push(rightNode);
			f->right = rightNode;
		}
	}
	return root;
}


void printLevel(BTNode<int>* root) {
	queue<BTNode<int>*> q;
	q.push(root);
	q.push(NULL);
	while(q.size()) {
		BTNode<int>* f = q.front();
		q.pop();
		if(f!=NULL) {
			cout<<f->data<<" ";
			if(f->left) {
				q.push(f->left);
			}
			if(f->right) {
				q.push(f->right);
			}
		} else {
			cout<<endl;
			if(q.size()) q.push(NULL);
		}

	}
}

int main() {
	BTNode<int>* root = takeInputLevel();
	
	printLevel(root);
	
	return 0;
}

