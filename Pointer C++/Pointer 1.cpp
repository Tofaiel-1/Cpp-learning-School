#include<iostream>
using namespace std;
int main(){
int  number = 30;
int* p;
p = &number;
cout << "Address of Vaariable is :" << p << "\n";
cout << "Address of p variable is :" << p << "\n";
cout << "Value of p variable is :" << *p << "\n";
return 0;

}

