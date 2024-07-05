
#include<iostream>
using namespace std;
class MyClass {
public:
    int myNum;
    string myString;
};

int main(){
  MyClass myObj;
  myObj.myNum = 15; // the code work if i use public
  // check it replace by private to public.
  myObj.myString = "Some text";

cout <<myObj.myNum << "\n";
cout <<myObj.myString << "\n";

}

/*
To correct the code, you need to provide public getter and setter methods
in the MyClass class to access and modify the private members myNum and myString. In C++,
 private members cannot be accessed directly from outside the class.

Here is the corrected code:
*/

/*
#include <iostream>
using namespace std;

class MyClass {
private:
    int myNum;
    string myString;

public:
    // Setter for myNum
    void setMyNum(int num) {
        myNum = num;
    }

    // Getter for myNum
    int getMyNum() {
        return myNum;
    }

    // Setter for myString
    void setMyString(string str) {
        myString = str;
    }

    // Getter for myString
    string getMyString() {
        return myString;
    }
};

int main() {
    MyClass myObj;

    myObj.setMyNum(15);
    myObj.setMyString("Some text");

    cout << myObj.getMyNum() << "\n";
    cout << myObj.getMyString() << "\n";

    return 0;
}

*/
