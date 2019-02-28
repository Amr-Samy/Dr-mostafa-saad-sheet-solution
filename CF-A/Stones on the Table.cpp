#include <iostream>
using namespace std;

int main() {
	int n,c=0; char a[50];
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;++i)
	{
		if(a[i]==a[i+1])
		{
			c++;
		}
		//else if(a[i+1]==a[i+2] && a[i]==a[i+3])
		//{ c++; }
	}
	cout<<c<<endl;
}
