#include<bits/stdc++.h> 
using namespace std;

int len(char input[]) {
	if(input[0]=='\0') return 0;
	int smallAns = len(input+1);
	return smallAns+1;
}

int main() {
	char s[] = "abc";
	int l = len(s);
	cout<<l;
}
