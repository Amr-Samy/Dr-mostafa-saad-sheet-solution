#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,f=0;char c ='a';
	cin>>n>>k;
		for(int j=0;j<k;++j)
			{
			char x=c+j;
			cout<<x;f++;
			if(x=='z') j=j-25;
			if(j==k-1) {j=-1;}
			if(f==n) break;
			}
}
