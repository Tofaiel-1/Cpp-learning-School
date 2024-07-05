#include<iostream>
using namespace std;
void myFunction(){
int  x = 5;
cout << x;
}
int main(){
myFunction();
return 0;
}
/*
In C++, variables are only accessible inside the region they are created.
 This is called scope.


A local variable cannot be used outside the function it belongs to.

If you try to access it outside the function, an error occurs:

Example
*/
