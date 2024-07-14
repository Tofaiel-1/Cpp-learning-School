#include <iostream>
using namespace std;

// Function prototype
int factorial(int n);

int main() {
    int n, result;
    cout << "Enter a non-negative number: ";
    cin >> n;
    result = factorial(n);
    cout << "Factorial of " << n << " = " << result << endl;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
