
/*
A variable created outside of a function, is called a global variable and belongs to the global scope.

*/
#include<iostream>
using namespace std;
 int x = 5;
 void myFunction(){
   cout << x << "\n";

 }
int main(){
myFunction();
cout << x;
return 0;
}
