#include <iostream>
using namespace std;

void swapNums(int &x, int &y) { // be careful variable name
int z = x;
x = y;
y  = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

 cout << "before swap :" << "\n";
 cout << firstNum << secondNum << "\n";

 swapNums(firstNum, secondNum);

  cout << "After swap : " << "\n";
  cout << firstNum << secondNum << "\n";
  return 0;

}



