#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e) {
	int pivot = a[e];
	int count=0;
	for(int i=s;i<e;i++) {
		if(a[i]<pivot) count++;
	}
	int p = count+s;
	swap(a[p],a[e]);
	int i=s;
	int j=e;
	while(i<p && j>p) {
		if(a[i]>a[p] && a[j]<a[p]) {
			swap(a[i],a[j]);
			i++;
			j--;
		}
		else if(a[i]>a[p] && a[j]>a[p]) j--;
		else if(a[i]<a[p] && a[j]<a[p]) i++;
		else {
			i++;
			j++;
		}
	}
	return p;
}


void quickSort(int a[], int s, int e) {
	if(s>=e) return;
	int p = partition(a,s,e);
	quickSort(a,s,p-1);
	quickSort(a,p+1,e);
}

int main() {
	
	int a[] = {3,6,1,2,5,4};
	quickSort(a,0,5);
	
	for(int i=0;i<6;i++) {
		cout<<a[i]<<" ";
	}
	
}
