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
			int cI = pq.size()-1;
			while(cI>0) {
				int pI = (cI-1)/2;
				if(pq[pI]>pq[cI]) {
					swap(pq[cI], pq[pI]);
					cI = pI;
				} else {
					break;
				}
			}
		}
		
		int removeMin() {
			if(isEmpty()) {
				return 0;  //pq is empty
			}
			int ans = pq[0];
			swap(pq[0], pq[pq.size()-1]);
			pq.pop_back();
			
			int pI = 0;
			while(true) {
				int lcI = 2*pI + 1;
				int rcI = 2*pI + 2;
				int minI = pI;
				
				if(lcI< pq.size() && pq[lcI]<pq[minI]) {
					minI = lcI;
				}
				if(rcI< pq.size() && pq[rcI]< pq[minI]) {
					minI = rcI;
				}
				if(minI == pI) {
					break;
				}
				swap(pq[pI], pq[minI]);
				pI = minI;
			}
			
			
			return ans;
			
		}
		
};

int main() {
	
	PriorityQueue p;
	p.insert(100);
	p.insert(10);
	p.insert(15);
	p.insert(4);
	p.insert(17);
	p.insert(67);
	
	
	cout<<"Min ele "<<p.getMin()<<endl;
	
	while(!p.isEmpty()) {
		cout<<p.removeMin()<<" ";
	}
	
	return 0;
}
