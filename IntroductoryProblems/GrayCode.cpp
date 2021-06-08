#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> g(int n)
{
  vector <string> v,temp;
  v.push_back("0");
  v.push_back("1");
  int count=1;
  while(count<n)
  {
    count++;
    for (string i:v)
    {
      temp.push_back("0"+i);
    }
    vector<string> rev_v=v;
    reverse(rev_v.begin(),rev_v.end());
    for (string i : rev_v)
    {
      temp.push_back("1"+i);
    }
    v.clear();
    v=temp;
    temp.clear();
  }
  return v;
}
int main()
{
  int n;
  cin>>n;
  vector<string> c=g(n);
  for (string i : c)
  {
    cout<<i<<"\n";
  }

  return 0;
}
