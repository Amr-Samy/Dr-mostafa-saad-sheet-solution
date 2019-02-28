```c++
language #=> "c++"
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,y,z,sol=0;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>x>>y>>z;
		int sum=x+y+z;
		if(sum>=2) {sol++;}
	}
	cout<<sol<<endl;
}
```
