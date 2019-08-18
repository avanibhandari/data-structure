#include<iostream>
using namespace std;
int main()
{
  int a[10],n,i,p,j,count=0;
  cout<<"enter size of an array";
  cin>>n;
  cout<<"enter element in array";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"enter element to be deleted";
  cin>>p;
  for(i=0;i<n;i++)
  {
   if (a[i]==p)
{
  
  for(j=i;j<n-1;j++)
  {
    a[j]=a[j+1];
  }
count++;



}
}

if(count==0)
{
  cout<<"no number found";
}
else
cout<<"element found";
for(i=0;i<n-1;i++)
{
  cout<<a[i];
}
return 0;
}
