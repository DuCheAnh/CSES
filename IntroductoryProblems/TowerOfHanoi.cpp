#include <iostream>
#include <string>
using namespace std;
void tower_of_hanoi(int n,char from, char to, char aux)
{
  if (n==1)
    {
      cout<<from<<" "<<to<<endl;
      return;
    }
  tower_of_hanoi(n-1,from,aux,to);
  cout<<from<<" "<<to<<endl;
  tower_of_hanoi(n-1,aux,to,from);
}
int main()
{
  int n;
  cin>>n;
  cout<<(1<<n)-1<<endl;
  tower_of_hanoi(n,'1','3','2');
}
