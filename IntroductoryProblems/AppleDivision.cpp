#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define lli long long int
using namespace std;
lli closest_subset(lli *arr, lli n){
    lli snum = 0;
    lli total=0;
    for (int i=0;i<n;++i)
    {
      total+=arr[i];
    }
    lli closest=0;
    while(snum<pow(2,n)){
      lli sum=0;
        for(int i=0;i<n;++i)
        {
            if((snum&(1<<i))!=0)
                sum+=arr[i];
        }
        if (sum<=total/2)
          closest=max(closest,sum);
        ++snum;
    }
    return closest;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  lli n,sum=0;
  cin>>n;
  lli a[n];

  for (int i=0;i<n;i++)
    cin>>a[i], sum+=a[i];

  lli result=sum-2*closest_subset(a,n);
  cout<<result;
}
