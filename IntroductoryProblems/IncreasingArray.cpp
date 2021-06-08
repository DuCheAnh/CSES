#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  unsigned long long int n;
    cin>>n;

  unsigned long long int total,max,prev;
  total=max=prev=0;
  for (long long i=0;i<n;i++)
  {
    long long x=0;
    cin>>x;
    if (x>max) max=x;
    if (prev>x)
    {
      total+=prev-x;
      x=prev;
    }

    prev=x;
  }

  cout<<total;
  return 0;
}
