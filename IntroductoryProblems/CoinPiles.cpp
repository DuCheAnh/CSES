#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
  int t,a,b;
  vector<string> v;
  cin>>t;
  for (int i=0;i<t;i++)
  {
    cin>>a>>b;
    int max=a;
    if (b>a) max=b;
    int x=max*2+max-a-b;
    if (a!=0 && b!=0)
      if (x%3==0 && max-2*(x/3)>=0)
        v.push_back("YES");
        else v.push_back("NO");
    else if (a==0 && b==0) v.push_back("YES");
    else v.push_back("NO");
  }
  for (string i : v)
  cout<<i<<"\n";
}
