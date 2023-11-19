#include <iostream>
using namespace std;
// Function to interchange two variables using references
void interchangeByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to interchange two variables using pointers
void interchangeByAddress(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Before interchange: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Interchange using references
    interchangeByReference(num1, num2);

    cout << "After interchange by reference: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Reset values
    num1 = 5;
    num2 = 10;

    // Interchange using pointers
    interchangeByAddress(&num1, &num2);

    cout << "After interchange by address: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
