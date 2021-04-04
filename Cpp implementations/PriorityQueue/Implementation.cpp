#include<bits/stdc++.h>
using namespace std;


class PriorityQueue{
	vector<int> pq;
	public: 
		PriorityQueue() {
			
		}
		
		bool isEmpty() {
			return pq.size()==0;
		}
		
		int getSize() {
			return pq.size();
		}
		
		int getMin() {
			if(isEmpty()) {
				return 0;  //pq is empty
			}
			return pq[0];
		}
		
		void insert(int element) {
			pq.push_back(element);
		}
		
};

int main() {
	
	return 0;
}
