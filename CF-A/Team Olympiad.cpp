#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x=0,y=0,z=0,g,v;
	vector<int> a;
	vector<int> x1;
	vector<int> x2;
	vector<int> x3;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>v;
		 a.push_back(v);
		 if(v==1)
		 {x++; x1.push_back(i);}
	else if(v==2) 
		 {y++; x2.push_back(i);}
	else if(v==3) 
		 {z++; x3.push_back(i);}
	}
	g=min(x,min(y,z)) ;
	if(x==0 ||y==0 ||z==0) {cout<<0; return 0;}
	cout<<g<<endl;
	for(int i=0 ;i<g;++i)
	{
		cout<<x1[i]<<" "<<x2[i]<<" "<<x3[i]<<" "<<endl;
	}
}
