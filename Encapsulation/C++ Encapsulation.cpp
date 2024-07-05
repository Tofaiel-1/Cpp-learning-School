#include <iostream>
using namespace std;

class class_name
{
private:
    int a;

public:
    void setA(int num)
    {
        a = num;
    }

    int getA()
    {
        return a;
    }
};

int main()
{
    class_name obj;
    obj.setA(5);
    cout << obj.getA() << endl;
}

