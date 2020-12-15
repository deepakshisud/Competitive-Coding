#include<iostream>
using namespace std;

int length(char input[]){
	int count=0;
	for(int i=0;input[i]!='\0';i++)
		count++;
	return count;
}

int main()
{
	char string[100];
	cin.getline(string,100);
	char s = 0;
	char e = length(string)-1;
	while(s<=e){
		swap(string[s],string[e]);
		s++;
		e--;
	}
	
	cout<<string;
	
	return 0;
	
}
