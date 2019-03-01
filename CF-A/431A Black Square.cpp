#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d, ans=0;string st;
	cin>>a>>b>>c>>d;
	cin>>st;
	for(int j=0;j<st.size();++j)
	{
		
	if(st[j]=='1') ans+=a;
	else if(st[j]=='2') ans+=b;
	else if(st[j]=='3') ans+=c;
	else if(st[j]=='4') ans+=d;
	}
	cout<<ans<<endl;
}
