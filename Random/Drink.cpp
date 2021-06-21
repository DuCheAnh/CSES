#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void get_result(char person[],int bottle[],int person_size,int bottle_size)
{
  int index=distance(bottle,max_element(bottle,bottle+bottle_size));
  bottle[index]=-(bottle[index]-1);
  cout<<index+1;
  for (int i=1;i<person_size;i++)
  {
        if ((*min_element(bottle,bottle+bottle_size)<=0 && person[i]=='E') ||
        (*max_element(bottle,bottle+bottle_size)==0 && person[i]=='W' ))
        {
          int index=distance(bottle,min_element(bottle,bottle+bottle_size));
          bottle[index]+=1;
          cout<<" "<<index+1;
        }
        else
        {
          int index=distance(bottle,max_element(bottle,bottle+bottle_size));
          bottle[index]=-(bottle[index]-1);
          cout<<" "<<index+1;
      }
  }
}

int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  int bottle[m];
  char person[n];

  cout<<"person: ";
  for (int i=0;i<n;i++)
  {
    cin>>person[i];
  }

  cout<<"bottle: ";
  for (int i=0;i<m;i++)
  {
    cin>>bottle[i];
    bottle[i]=k-bottle[i];
  }

  cout<<"result: ";
  get_result(person,bottle,n,m);

}
