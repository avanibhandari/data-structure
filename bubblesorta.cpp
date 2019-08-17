#include <iostream>
using namespace std;
int main()
{
  int a[10],i,n,j,temp;
  cout<<"enter the size of an array";
  cin>>n;
  cout<<"enter element in array";
  for(i=0;i<n;i++)
  {
    cin>>a[i];

  }
  for(i=0;i<n-1;i++)

 {
   for(j=0;j<n-i-1;j++)
   {
     if(a[j]>a[j+1])
     {
       temp=a[j];
     
       a[j]=a[j+1];
         a[j+1]=temp;

     }
   }
 }
for(i=0;i<n;i++)
{
 cout<<a[i];
}
return 0;
}
