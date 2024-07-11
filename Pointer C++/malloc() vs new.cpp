
#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){

int len;
std::cin>>len;
std::cout << "Enter the cout of Number :" << "\n";
std::cin >> len;
int *ptr;
ptr = (int*)malloc(sizeof(int)*len);
 for(int i = 0; i<len; i++){

std::cout <<*(ptr+i)<< "\n";
for(int i=0; i<len; i++)
 {
    std:cout << *(ptr+i) <<"\n";
 }
free(ptr);
return 0;
}}
