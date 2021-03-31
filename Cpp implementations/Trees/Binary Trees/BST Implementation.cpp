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
			cout<<root->data<<": ";
			if(root->left) {
				cout<<"L"<<root->left->data<<" ";
			}
			if(root->right) {
				cout<<"R"<<root->right->data<<" ";
			}
			cout<<endl;
			
			printTree(root->left);
			printTree(root->right);
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
	BTNode<int>* insert(BTNode<int>* root, int data) {
		if(root==NULL) {
			BTNode<int>* node = new BTNode<int>(data);
			return node;
		}
		if(data<root->data) {
			root->left = insert(root->left, data);
		} else {
			root->right = insert(root->right, data);
		}
		return root;
		
	}
	BTNode<int>* deleteData(BTNode<int>* root, int data) {
		if(!root) return NULL;
		if(data>root->data) {
			root->right = deleteData(root->right, data);
		} else if(data< root->data){
			root->left = deleteData(root->left, data);
		} else {
			if(!root->left && !root->right) {
				delete root;
				return NULL;
			} else if(root->left && !root->right) {
				BTNode<int>* temp = root->left;
				root->left = NULL;
				delete root;
				return temp;
			} else if(!root->left) {
				BTNode<int>* temp = root->right;
				root->right = NULL;
				delete root;
				return temp;
			} else {
				BTNode<int>* minNode = root->right;
				while(minNode->left != NULL) {
					minNode = minNode->left;
				}
				int rightMin = minNode->data;
				root->data = rightMin;
				root->right = deleteData(root->right,  rightMin);
			}
		}
		return root;
	}
	public:
		BST() {
			root = NULL;
		}
		
		~BST() {
			delete root;
		}
		
		void deleteData(int data) {
			root = deleteData(root, data);
		}
		
		void insert(int data) {
			root = insert(root, data);
		}
		
		bool hasData(int data) {
			return hasData(root, data);
		}
		void print() {
			printTree(root);
		}
};

int main() {
	BST b;
	b.insert(10);
	b.insert(5);
	b.insert(20);
	b.insert(7);
	b.insert(3);
	b.insert(15);
	
	b.print();
	b.deleteData(10);
	cout<<endl;
	b.print();
	b.deleteData(5);
	cout<<endl;
	b.print();
}
