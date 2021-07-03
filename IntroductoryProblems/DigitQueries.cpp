#include <iostream>
#include <stdio.h>
#include <vector>
#define lli long long
using namespace std;

lli power(int val,int power)
{
  if (power==0) return 1;
  lli result=val;
  for (int i=0;i<power-1;i++)
    result*=val;
  return result;
}
char calculate(lli digit)
{
  lli x=9;
  lli rank=1;
  while (x<digit)
    rank++, x+=9*power(10,rank-1)*rank;
  x-=9*power(10,rank-1)*rank;
  digit-=x;
  lli value=digit/rank;
  lli sub_pos=digit%rank;
  for (int i=0;i<rank-1;i++)
    value+=9*power(10,i);
  if (sub_pos!=0)
    value++;
  string val_str=to_string(value);
  if (sub_pos==0)
    return val_str[val_str.length()-1];
  return val_str[sub_pos-1];
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<char> v;
  int q;
  lli k;
  cin>>q;
  for (int i=0;i<q;i++)
    cin>>k, v.push_back(calculate(k));
  for (char i : v)
    cout<<i<<endl;
}
