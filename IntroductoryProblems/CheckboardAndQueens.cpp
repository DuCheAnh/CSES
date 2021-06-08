#include <stdio.h>
#include <iostream>
using namespace std;
char a[8][8];
int val=0;
bool isValid(int row, int col)
{
//check for '*'
  if (a[row][col]=='*') return false;
// the top
 for (int i=0;i<8;i++)
 {
   if (a[i][col]=='q') return false;
 }
 //negative
 for (int i=row,j=col;i>=0&& j>=0;j--,i--)
 {
   if (a[i][j]=='q') return false;
 }
 //positive
 for (int i=row,j=col;j<8 && i>=0;i--,j++)
 {
   if (a[i][j]=='q') return false;
 }
 return true;
}

void count(int row)
{
  if (row==8)
  {
    val++;
    return;
  }

  for (int col=0;col<8;col++)
  {
    if (isValid(row,col))
    {
      a[row][col]='q';
      count(row+1);
      a[row][col]='.';
    }
  }
}

int main()
{
  for (int i=0;i<8;i++)
    for (int j=0;j<8;j++)
    {
      cin>>a[i][j];
    }
  count(0);
  cout<<val<<endl;
  return 0;
}
