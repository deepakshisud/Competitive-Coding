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



void printTree(BTNode<int>* root) {
	if(root==NULL) return;
	cout<<root->data<<": ";
	if(root->left!=NULL)
		cout<<"L"<<root->left->data<<" ";
	if(root->right!=NULL)
	cout<<"R"<<root->right->data<<" ";
	cout<<endl;
	printTree(root->left);
	printTree(root->right);
}

int main() {
	
	BTNode<int>* root = takeInputLevel();
	
	printTree(root);
	
	return 0;
}
