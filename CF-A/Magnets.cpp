#include <iostream>
using namespace std;

int main() {
	int n, arr[100001],ans=0;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;++i)
	{
		if(arr[i] != arr[i+1]) 
		{
			ans++;
		}
	}
	cout<<ans<<endl;
}
