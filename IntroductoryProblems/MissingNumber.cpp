#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  long n=0;
  long total=0;
  while (n<2 || n>200000)
  {
    cin>>n;
  }
  for (int i=1;i<=n;i++)
  {
    total+=i;
  }
  for (int i=0;i<n-1;i++)
  {
    int m;
    cin>>m;
    total-=m;
  }
  cout<<total;
  return 0;
}
