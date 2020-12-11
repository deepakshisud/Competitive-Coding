#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter the size of array"<<endl;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	int largest = INT_MIN; //INT_MIN = -infinity
	for(int i=0;i<n;i++){
		if(a[i]>largest){
			largest = a[i];
		}
	}
	
	cout<<"The largest number "<<largest<<endl;
}
