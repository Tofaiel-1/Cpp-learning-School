#include<iostream>
#include<string>
using namespace std;
void myFunction(string fname, int age) {
   cout << fname << "khan" << age << " years old.\n";
   cout << fname << "Refs" << age << " years old.\n";

}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}
