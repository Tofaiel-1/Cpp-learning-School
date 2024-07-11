
#include<iostream>
using namespace std;
int main()
{
    int size;
    int *arr = new int[size];
    cout<< "Enter the size of  the array:";
    std::cin>> size;
    cout << "\n  Enter the element :";
for(int i=0;i<size;i++)   // for loop

{
cin>>arr[i];
}
cout << "\n The element  that you have entered are : ";
for(int i = 0; i< size; i++)
{
    cout <<arr[i]<<",";
}
delete arr;
return 0;
}
