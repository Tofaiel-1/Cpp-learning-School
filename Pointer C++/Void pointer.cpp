#include <iostream>
using namespace std;
int main()
{
  void *ptr;   // void pointer declaration
  int a=9;   // integer variable initialization
  ptr=&a;   // storing the address of 'a' variable in a void pointer variable.
  cout << &a << std::endl;
  cout << ptr << std::endl;
  return 0;

}
