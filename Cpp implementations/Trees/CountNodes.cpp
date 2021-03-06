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

int countNodes(TreeNode<int>* root) {
	if(root==NULL) return 0;
	int count = 1;
	for(int i=0; i<root->children.size(); i++) {
		count += countNodes(root->children[i]);
	}
	return count;
}

int treeHeight(TreeNode<int>* root) {
	int h = 0;
	for(int i = 0; i<root->children.size(); i++) {
		int smallAns = treeHeight(root->children[i]);
		h = max(h,smallAns);
	}
	h++;
	return h;
}

void printKlevelNodes(TreeNode<int>* root, int k) {
	if(k==0) {
		cout<<root->data<<" ";
		return;
	} else {
		for(int i=0; i<root->children.size(); i++) {
			printKlevelNodes(root->children[i], k-1);			
		}
	}
}


int main() {
	TreeNode<int>* root = takeInput();
	cout<<"The number of nodes: "<<countNodes(root)<<endl;
	cout<<"The tree height: "<<treeHeight(root)<<endl;
	int k;
	cout<<"Enter the kth level: ";
	cin>>k;
	cout<<"The nodes at "<<k<<" are: ";
	printKlevelNodes(root,k);
	return 0;
}
