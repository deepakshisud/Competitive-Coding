#include<bits/stdc++.h>
using namespace std;

void replace(char input[],char a, char x) {
	if(input[0]=='\0') return;
	
	if(input[0]==a) {
		input[0]=x;
	}
	replace(input+1,a,x);
}

int main() {
	char s[] = "aswdartaam";
	char a='a';
	char x='x';
	cout<<s<<endl;
	replace(s,a,x);
	cout<<s<<endl;
}
