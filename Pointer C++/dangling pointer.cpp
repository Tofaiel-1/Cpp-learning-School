// not use the free() function at the correct place, then it can lead to the cause of the dangling pointer.
#include<iostream>
#include<stdlib.h>
using namespace std;
int *func()
{
    int *p;
    p = (int*) malloc(sizeof(int));
    free(p);
    return p;

}
int main(){
int *ptr;
ptr = func();
free(ptr);
return 0;
}
