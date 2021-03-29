#include<bits/stdc++.h>
using namespace std;

template<typename T>

class BTNode {
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

class BST {
	BTNode<int>* root;
	void printTree(BTNode<int>* root) {
			if(root==NULL) return;
			
			if(root->left) {
				cout<<"L"<<root->left->data<<" ";
			}
			if(root->right) {
				cout<<"R"<<root->right->data<<" ";
			}
			cout<<endl;
			
			print(root->left);
			print(root->right);
	}
	bool hasData(BTNode<int>* root, int data) {
		if(!root) return false;
		if(root->data == data) return true;
			
		if(root->data>data) {
			return hasData(root->left, data);
		} else {
			return hasData(root->right, data);
		}
			
	}
	public:
		BST() {
			root = NULL;
		}
		
		~BST() {
			delete root;
		}
		
		void deleteData(int data) {
			
			
		}
		
		void insert(int data) {
			
		}
		
		bool hasData(int data) {
			return hasData(root, data);
		}
		void print() {
			printTree(root);
		}
};
