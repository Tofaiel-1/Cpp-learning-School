
#include<iostream>
#include <cstdlib>
using namespace  std;
int main (){
int *ptr1 = NULL;
int *ptr2;
int x = 9;
ptr2 = &x;
if (ptr1)
{
    cout << "pointer is not Null" << "\n";

}
else{
    cout << "pointer is NULL";
}
free(ptr2);
return 0;
}
