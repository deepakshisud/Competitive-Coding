#include<bits/stdc++.h>
using namespace std;

void removeConsecutive(char input[]) {
	if(input[0]=='\0') return;
	
	if(input[0]==input[1]) {
		for(int i=0;input[i]!='\0';i++) {
			input[i]=input[i+1];
		}
		removeConsecutive(input);
	}
	else removeConsecutive(input+1);
}

int main() {
	char s[] = "aaabbcddbbee";
	removeConsecutive(s);
	cout<<s;
}
