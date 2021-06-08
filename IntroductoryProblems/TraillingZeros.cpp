#include <iostream>
#include <stdio.h>
#define lli long long int
using namespace std;
int main()
{
  lli n;
  cin>>n;
  lli count=0;
  for (int i=5; n/i>=1;i*=5)
  {
    count+=n/i;
  }
  cout<<count;
  return 0;
}
