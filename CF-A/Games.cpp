#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h[31],g[31],ans=0;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>h[i]>>g[i];
	}
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(h[i]==g[j]) ans++;
		}
	}
	cout<<ans;
}
