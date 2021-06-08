#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
  string str;
  cin>>str;
  int max=0;
  int count=0;
  for (int i=0;i<str.length()-1;i++)
  {
    if (str[i]==str[i+1]) count++;
    else count=0;
    if (max<count) max=count;
  }
  cout<<max+1;
  return 0;
}
