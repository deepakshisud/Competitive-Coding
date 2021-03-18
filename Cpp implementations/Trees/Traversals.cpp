#include<bits/stdc++.h>
using namespace std;

template<typename T>
class TreeNode {
	public:
		T data;
		vector<TreeNode<T>*> children;
		
		TreeNode(T data) {
			this->data = data;
		}
};

TreeNode<int>* takeInput() {
	int rootData;
	cout<<"Enter data: "<<endl;
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	queue<TreeNode<int>*> q;
	q.push(root);
	while(q.size()) {
		int n;
		TreeNode<int>* f = q.front();
		q.pop();
		cout<<"Enter the num of children of "<<f->data<<": "<<endl;
		cin>>n;
		for(int i=1; i<=n; i++) {
			int childData;
			cout<<"Enter the "<<i<<"th child of "<<f->data<<": "<<endl;
			cin>>childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			q.push(child);
			f->children.push_back(child);
		}
	}
	return root;
}

//1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
void preorderPrint(TreeNode<int>* root) {
	cout<<root->data<<" ";
	for(int i=0; i<root->children.size(); i++) {
		preorderPrint(root->children[i]);
	}
}

void postorderPrint(TreeNode<int>* root) {
	for(int i=0; i<root->children.size(); i++) {
		postorderPrint(root->children[i]);
	}
	cout<<root->data<<" ";
}

int main() {
	TreeNode<int>* root = takeInput();
	postorderPrint(root);
}
