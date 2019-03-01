#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;int st=0,m=0;
	cin>>s;
	for(int i=0;i<s.length();++i)
	{
		int index = s[i]-97;
		int w = abs(st-index);
		if( w>13) { m+= 26 - w ; }
		else		 {m+=w ;}
		
		st=index;
	}
	cout<<m<<endl;
}
