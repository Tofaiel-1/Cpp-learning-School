#include <iostream>
#include <string>
using namespace std;
class Car {
public:
    string brand;
    string model;
    int year;
};
 int main (){
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "x5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand = "Lili";
    carObj2.model = "L5";
    carObj2.year = 2023;
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

