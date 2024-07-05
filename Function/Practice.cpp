#include<iostream>
using namespace std;
int plusInt(int x, int y){
return x+y;
}
double plusDouble(double x, double  y){
    return x+y;
}

int main(){
  int myNum1 = plusInt(8,5);
  //double myNum2 = plusDouble(4.5, 3,5); // not work
  double myNum2 = plusDouble(4.5, 3.5); // work where problem


  cout << "Int :" << myNum1 << "\n";
  cout << "Double :" << myNum2 << "\n";
return 0;

}

