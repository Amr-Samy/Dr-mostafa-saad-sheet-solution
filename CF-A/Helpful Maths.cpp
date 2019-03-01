#include <bits/stdc++.h>
using namespace std;
int main()
{    
    char arr[102];
    cin>>arr;
    int x=strlen(arr);
    for (int i =0;i<x;i+=2){
        sort(arr,arr+x);
    }
  for (int i=0;i<x-1;i++){
            if (arr[i]=='+')continue;
            cout<<arr[i]<<"+";
    }cout<<arr[x-1];
 }
