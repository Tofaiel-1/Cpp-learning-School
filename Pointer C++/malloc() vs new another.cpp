
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
int len;
cout << "Enter the count of number :";
cin >>len;
int *ptr;
ptr = (int*) malloc(sizeof(int)*len);
for(int i = 0; i<len; i++)
{
    cout << "Enter a number:" <<"\n";
    cin >> *(ptr +i);
}
 cout <<"Entered elements are:" <<"\n";
 for(int i = 0; i <len; i++)
 {
 cout<< *(ptr+i) << "\n";

 }
 free(ptr);
 return 0;
}
