#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
string Reorder(string str)
{
  int original_length=str.length();
  vector<char> v1;
  vector<int> v2;
  for (int i=0;i<str.length();i++)
  {
    if (str[i]!='\0')
    {
      int count=1;
      v1.push_back(str[i]);
      for (int j=i+1;j<str.length();j++)
        if (str[i]==str[j])
        {
          count++;
          str[j]='\0';
        }
      v2.push_back(count);
    }
  }
  int size=v1.size();
  string c;
  for (int i=0;i<size;i++)
  {
    if (v2[i]%2==0)
    {
      for (int j=0;j<v2[i]/2;j++) c+=v1[i];
      v2[i]=0;
    }
    else if (v2[i]>2)
    {
      for (int j=0;j<v2[i]/2;j++) c+=v1[i];
      v2[i]=1;
    }
  }
  int count2=0;
  for (int i=0;i<size;i++)
  {
    if (v2[i]==1)
    {
      c+=v1[i];
      count2++;
    }
  }
  int sub_amount=0;
  if (count2==1) sub_amount=1;
  string c2;
  for (int i=c.length()-1-sub_amount;i>=0;i--)
  {
    c2+=c[i];
  }
  c+=c2;
  if (c.length()!=original_length) return "";
  return c;
}
int main()
{
  string s;
  cin>>s;
  string result=Reorder(s);
  if (result!="") cout<<result;
  else cout<<"NO SOLUTION";
  return 0;
}
