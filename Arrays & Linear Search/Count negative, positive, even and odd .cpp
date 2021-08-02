
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int p,n,e,o;
  p=n=e=o=0;
  int arr[10];
  for(int i=0;i<10;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<10;i++)
  {
    if(arr[i]>0)
    {
      p=p+1;
    }
     if(arr[i]<0)
    {
      n=n+1;
    }
     if(arr[i]%2==0)
    {
      e=e+1;
    }
    else
    {
      o=o+1;
    }
  }
  cout<<p<<"\n";
    cout<<n<<"\n";
    cout<<e<<"\n";
    cout<<o<<"\n";
  return 0;
}
