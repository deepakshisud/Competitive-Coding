#include<bits/stdc++.h>
using namespace std;

void perm(char s[], int i=0) {
	if(s[i]=='\0') {
		cout<<s<<endl;
	}
	
	for(int j=i;s[j]!='\0';j++) {
		swap(s[j],s[i]);
		perm(s,i+1);
		swap(s[i],s[j]);
		
	}
}

int main() {
	char s[] = "abc";
	
	perm(s);
	cout<<s;
}
