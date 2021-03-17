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
		cout<<"Enter no of children of "<<f->data<<" ";
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

void printLevel(TreeNode<int>* root) {
	queue<TreeNode<int>*> q;
	q.push(root);
	while(q.size()) {
		TreeNode<int>* f = q.front();
		q.pop();
		cout<<f->data<<" :";
		for(int i=0; i<f->children.size(); i++) {
			TreeNode<int>* child = f->children[i];
			cout<<child->data<<" ";
			q.push(child);
		}
		cout<<endl;
	}
}

int main() {
	
	TreeNode<int> * root = takeInput();
	printLevel(root);
	
	return 0;
}
