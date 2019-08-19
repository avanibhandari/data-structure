#include <iostream>
using namespace std;
int main()
{
int a[5],b[5];
int c[10];    
cout<<"enter elements for array1:";
for(int i=0;i<=4;i++)
{
  cin>>a[i];
}
cout<<"enter elements for array 2:";
for(int i=0;i<=4;i++)
{
  cin>>b[i];
}
for(int i=0;i<=4;i++)
{
    c[i]=a[i];
}
for(int i=0,k=5;k<=10&&i<5;i++,k++)
{
    c[k]=b[i];
}
cout<<"merging";
for(int i=0;i<=9;i++)
{
cout<<"\t"<<c[i];
}}
