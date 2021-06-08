#include <iostream>
#include <stdio.h>
#define lli long long int
using namespace std;
int main()
{
  lli n;
  cin>>n;
  lli a[100000]={0};
  lli count=0;
  lli result=0;
  lli intercepted=0;
  while (count<=n)
  {
    for (int i=1;i<=count;i++)
      for (int j=1;j<=count;j++)
        for (int k=i;k<=count;k++)
          for (int l=1;l<=count;l++)
          {
            if (!(i==k && l<=j))
            if ((k!=i) || (l!=j))
            {
              result++;
            if (l<=n)
            {
              if ((abs(i-k)==1 && abs(j-l)==2) || (abs(i-k)==2 && abs(j-l)==1))
              {
                intercepted++;
                result--;
              }
            }
          }

          }
      a[count-1]=result;
      result=0;;
      count++;
  }
  for (int i=0;i<count-1;i++)
  {
    cout<<a[i]<<"\n";
  }
  return 0;

}
