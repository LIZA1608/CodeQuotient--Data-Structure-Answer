#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=i;j>=1;j--)
    {
      cout<<j;
    }
    for(int z= 2;z<=i;z++)
    {
      cout<<z;
    }
    cout<<endl;
  }
   return 0;
}
