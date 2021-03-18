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
	cout<<"Enter data: ";
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	queue<TreeNode<int>*> q;
	q.push(root);
	while(q.size()) {
		int n;
		TreeNode<int>* f = q.front();
		q.pop();
		cout<<"Enter the num of children of "<<f->data<<": ";
		cin>>n;
		for(int i=1; i<=n; i++) {
			int childData;
			cout<<"Enter the "<<i<<"th child of "<<f->data<<": ";
			cin>>childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			q.push(child);
			f->children.push_back(child);
		}
	}
	return root;
}

int countLeafNodes(TreeNode<int>* root) {
	if(root->children.size()==0) {
		return 1;
	}
	int ans = 0;
	for(int i=0; i<root->children.size(); i++) {
		ans += countLeafNodes(root->children[i]);
	}
	return ans;
}

int main() {
	TreeNode<int>* root = takeInput();
	cout<<"No of leaf nodes: "<<countLeafNodes(root);
	
	return 0;
}
