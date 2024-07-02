
#include<iostream>
#include <string>
using namespace std;
int main(){
   string firstName = "John  ";
   string lastName = "Doe";
   string fullName = firstName  + lastName;
   cout<< fullName;
   return 0;


}
/*
In the example above, we added a space after firstName to
create a space between John and Doe on output. However,
 you could also add a space with quotes (" " or ' '):

*/

/*
#include <iostream>
#include <string>
using namespace std;

int main () {
  string firstName = "John";
  string lastName = "Doe";
  string fullName = firstName + " " + lastName;
  cout << fullName;
  return 0;
}

*/
