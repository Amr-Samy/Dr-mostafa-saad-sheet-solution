#include <iostream>
using namespace std;

int main() {
	int n,c=0,p=0,unt=0,a[1000001];
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;++i)
	{
		if(a[i]>=1){p+=a[i];}
		else if (a[i]==-1){p--;}
		
		if(p<0)
		{
			unt+=(p*-1);
			p=0;
		}
		
	}
	cout<<unt<<endl;
}
