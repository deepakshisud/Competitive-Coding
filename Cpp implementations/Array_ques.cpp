#include<iostream>
using namespace std;

int minimumSwaps(int arr[], int n) {
    int min = 1, count = 0, j=0;
    for(int i=0; i<n; i++) {
    	if(arr[i]!=min){
            swap(arr[i],arr[min-1]);
            min++;
            i-=2;
            count++;
        }
    }
    return(count);

}

int main() {
	int n, count;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	count = minimumSwaps(arr,n);
	cout<<"Minimum number of swaps: "<<count;
	
	return 0;
}
