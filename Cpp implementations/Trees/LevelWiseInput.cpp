#include<bits/stdc++.h>
using namespace std;

template<typename T>
class TreeNode{
	public:
		T data;
		vector<TreeNode<T>*> children;
		
		TreeNode(T data){
			this->data = data;
		}
};

void printTree(TreeNode<int>* root) {
	cout<<root->data<<": ";
	for(int i=0; i<root->children.size(); i++) {
		cout<<root->children[i]->data<<" ";
	}
	cout<<endl;
	for(int i=0; i<root->children.size(); i++) {
		printTree(root->children[i]);
	}
}

TreeNode<int>* takeInput() {
	int rootData;
	cout<<"Enter data: ";
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	queue<TreeNode<int>*> q;
	q.push(root);
	while(q.size()){
		TreeNode<int>* f = q.front();
		q.pop();
		cout<<"Enter no of children of"<<f->data<<" ";
		int n;
		cin>>n;
		for(int i=1; i<=n; i++) {
			int childData;
			cout<<"Enter "<<i<<"th child of "<<f->data<<" ";
			cin>>childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			q.push(child);
			f->children.push_back(child);
		}
	}
	return root;
}

int main() {
	TreeNode<int>* root = takeInput();
	printTree(root);
}
