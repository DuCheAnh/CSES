#include <iostream>
#include <stdio.h>
#include <math.h>

#define lli long long int
using namespace std;
int main()
{
  lli n,x,y,max;
  cin>>n;
  lli count=0;
  lli a[100000]={0};
  while (n!=count)
  {
    cin>>y;
    cin>>x;
    if (x>y)
    {
      max=x;
    }
      else
      {
        max=y;
      }
    if (max==x)
    {
      if (x%2!=0)
      {
        a[count]=max*max-(y-1);
      }
      else {a[count]=(max-1)*(max-1)+y;}
    }
    else if (max==y)
    {
      if (y%2==0) {a[count]=(max*max)-x+1;}
      else {a[count]=(max-1)*(max-1)+x;}
    }
    count++;
  }
  for (lli i=0;i<n;i++)
  {
   cout<<a[i]<<"\n";
  }
  return 0;
}
