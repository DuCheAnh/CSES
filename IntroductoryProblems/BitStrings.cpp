#include <iostream>
#include <stdio.h>
#define lli long long int
using namespace std;
lli pow(lli n)
{
  lli x=1;
  for (int i=0;i<n;i++)
  {
    x=2*x%((lli)1e9+7);
  }
  return x;
}
int main()
{
  lli n;
  cin>>n;
  cout<<pow(n);
  return 0;
}
