
#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    float *ptr;
    ptr = (float*)calloc(1,sizeof(float));
    *ptr = 6.7;
    cout << "The value of *ptr before applying the free() function "<< *ptr << "\n";
    free(ptr);
     cout << "The value of *ptr before applying the free() function : " <<*ptr<< "\n";
    free(ptr);

 cout << "The value of *ptr after applying the free() function :" <<*ptr<< "\n";
    return 0;
}


