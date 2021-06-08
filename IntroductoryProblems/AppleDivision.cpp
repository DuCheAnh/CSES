#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define lli long long int
using namespace std;

int main()
{
  int n;

  cin>>n;
  vector<int> v;
  lli sum=0;
  for (int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    sum+=a;
    v.push_back(a);
  }
  lli half=sum/2;
  lli temp=0;
  lli closest=sum;
  sort(v.begin(),v.end(),greater<int>());
  while (half>0)
  {
    for (int i:v)
    {
      if (temp+i<=half)
        temp+=i;
    }
    if (closest>temp) closest=temp;
    half-=1;
  }
  cout<<sum-closest*2;
  return 0;
}
