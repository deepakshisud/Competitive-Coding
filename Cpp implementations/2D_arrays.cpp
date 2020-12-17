#include<iostream>
using namespace std;

void printArray(int a[][5], int m, int n) {
	//Row wise
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
int main() {
	int a[5][5] = {{0}};
	printArray(a,5,5);
}
