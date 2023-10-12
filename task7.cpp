#include <iostream>
using namespace std;

bool IsSymmetrical(int number);

int main() {
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;
    
    bool result = IsSymmetrical(number);

    if (result) {
        cout << "The number is symmetrical." << endl;
    } if (!result) {
        cout << "The number is not symmetrical." << endl;
    }

    return 0;
}


    bool IsSymmetrical(int number) {
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    return (hundreds == ones);
}


