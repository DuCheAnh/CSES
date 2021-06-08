#include <stdio.h>
#include <iostream>
using namespace std;
class Singleton
{
private:
  int value=0;
  static Singleton *instance;
  Singleton();
public:
  static Singleton *getInstance()
  {
    if (instance==NULL)
      instance=new Singleton();
    return instance;
  }
  int getValue()
  {
    return value;
  }
};
int main() {
  Singleton::getInstance();
  cout<<Singleton::getInstance()->getValue();
  return 0;
}
