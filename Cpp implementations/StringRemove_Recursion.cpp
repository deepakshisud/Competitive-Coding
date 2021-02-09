#include<bits/stdc++.h>
using namespace std;

void remove(char input[], char a) {
	if(input[0]=='\0') return;
	
	if(input[0]==a){
		for(int i=0;input[i]!='\0';i++){
			input[i]=input[i+1];
		}
		remove(input,a);
	}
	else remove(input+1,a);
}
int main() {
	char s[] = "absabdaar";
	remove(s,'a');
	cout<<s;
}
