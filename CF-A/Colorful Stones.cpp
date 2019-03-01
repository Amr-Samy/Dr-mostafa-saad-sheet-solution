#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;int p=0;int i=0;
	cin>>s>>t;
		for(int j=0;j<t.length();++j)
		{
			if(t[j]==s[i])
			{p++;i++;}
		}
	cout<<p+1<<endl;
}
