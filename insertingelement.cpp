#include <iostream>
using namespace std;
int main()
{

  int a[10],i,n,p,s;
  cout<<"enter size of an array";
cin>>n;
cout<<"enter element in array";
for(i=0;i<n;i++)
{
  cin>>a[i];
}
for(i=0;i<n;i++)
{
  cout<<a[i];
}
cout<<"enter index at which insert";
cin>>p;
cout<<"enter element to insert ";
cin>>s;
//make space for element insert
for(i=n;i>p;i--)
{
  a[i]=a[i-1];

}
a[p]=s;

for(i=0;i<n+1;i++)
{
  cout<<a[i];
}
return 0;
}
