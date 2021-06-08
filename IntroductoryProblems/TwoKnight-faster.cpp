#include <iostream>
#include <stdio.h>
#define lli long long int
using namespace std;

int main()
{
  lli n;
  cin>>n;
  for (int i=1;i<=n;i++)
  {
    lli i_square=i*i;
    lli intercepted=0;
    if (i>2) intercepted=4*(i-1)*(i-2);
    cout<<(i_square*(i_square-1))/2-intercepted<<"\n";
  }
  return 0;
}
