# include<bits/stdc++.h>
using namespace std;

int rotationCount(int a[], int size){
    int min=a[0],pos=0;
  for(int i=1;i<size;i++)
  {
    if(a[i]<min)
    {
      pos=i;
      min=a[i];
    }
  }
  return pos;
}


int main(){
   
    return 0;
}
