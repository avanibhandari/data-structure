#include <iostream>
using namespace std;
int main()
{
  int a[10],i,j,n,temp,loc,min;
  cout<<"enter size of an array";
  cin>>n;
  cout<<"enter elemennt in array";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  
  }
for(i=0;i<n-1;i++)
{
  min=a[i];
  loc=i;
for(j=i+1;j<n;j++)
{
  if(a[j]<min)
  {
    min=a[j];
    loc=j;
  }
}
temp=a[i];
a[i]=a[loc];
a[loc]=temp;
}


for(i=0;i<n;i++)
{
 cout<< a[i];
}
return 0;
}







