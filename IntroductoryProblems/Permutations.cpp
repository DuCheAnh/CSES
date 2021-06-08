#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  if (n<=3 && n>1)
  {
    cout<<"NO SOLUTION";
    return 0;
  }
    for (int i=n-1;i>0;i--)
    {
      if (i%2==0) cout<<i<<" ";
    }
    cout<<n;
    for (int i=1;i<n;i++)
    {
      if (i%2!=0) cout<<" "<<i;
    }
    return 0;
}
