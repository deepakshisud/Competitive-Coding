#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char input[100], output[100];
	int s=0;
	cin.getline(input,100);
	for(int i=0;input[i]!='\0';i++) {
		s=0;
		while(s<=i){
			strncpy(output,input,s+1);
			s++;
		}
		cout<<output<<endl;
	}
}
