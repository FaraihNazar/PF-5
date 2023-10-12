#include <iostream>
using namespace std;

string number_converter(int number);

int main() {
    int num;
    cout << "Enter a number (1-99): ";
    cin >> num;
    
    if (num >= 1 && num <= 99) {
        string result = number_converter(num);
        cout << result;
    } 
    
    return 0;
}

string number_converter(int number) {
    string words;

    if (number >= 20) {
        int tens = number / 10;
        int ones = number % 10;

        if (tens == 2) words = "Twenty";
        if (tens == 3) words = "Thirty";
        if (tens == 4) words = "Forty";
        if (tens == 5) words = "Fifty";
        if (tens == 6) words = "Sixty";
        if (tens == 7) words = "Seventy";
        if (tens == 8) words = "Eighty";
        if (tens == 9) words = "Ninety";

        words = words + number_converter(ones);
    }

    if (number >= 1 && number <= 19) {
        if (number == 1) words = "One";
        if (number == 2) words = "Two";
        if (number == 3) words = "Three";
        if (number == 4) words = "Four";
        if (number == 5) words = "Five";
        if (number == 6) words = "Six";
        if (number == 7) words = "Seven";
        if (number == 8) words = "Eight";
        if (number == 9) words = "Nine";
        if (number == 10) words = "Ten";
        if (number == 11) words = "Eleven";
        if (number == 12) words = "Twelve";
        if (number == 13) words = "Thirteen";
        if (number == 14) words = "Fourteen";
        if (number == 15) words = "Fifteen";
        if (number == 16) words = "Sixteen";
        if (number == 17) words = "Seventeen";
        if (number == 18) words = "Eighteen";
        if (number == 19) words = "Nineteen";
    }

    return words;
}

// LINE 35:The function `number_converter(ones)` is called within itself, which is a technique known as recursion. In this case, the `number_converter` function is calling itself with a new argument (`ones`) to handle the conversion of the ones place of a two-digit number.

// Here's how it works:

// 1. Initially, the `number_converter` function is called from `main` with an argument (e.g., `number_converter(25)`), where `number` is 25.

// 2. Inside the `number_converter` function, it first calculates the `tens` and `ones` digits based on the input number (e.g., `tens` becomes 2, and `ones` becomes 5).

// 3. When it reaches the line `words = words + number_converter(ones);`, it's making a recursive call to itself, but this time with a new argument, `ones`. This means it's essentially invoking the `number_converter` function again with a different value.

// 4. The recursive call with `number_converter(ones)` will process the `ones` digit (in this case, 5) and return its English word representation (which is "Five").

// 5. The result of the recursive call (i.e., the word representation of the `ones` digit) is then concatenated to the existing `words` string within the current instance of the function.

// 6. The recursion continues until it reaches a base case (in this code, the base case is when `number` is less than 20), at which point the function stops making recursive calls and starts returning values back up the call stack.

// The key to understanding recursion is that each instance of the function behaves independently and works on its specific argument (`ones` in this case), which allows it to handle different parts of the problem. Recursion continues until it reaches a stopping condition or base case, and then the results are combined as the recursive calls return.





// When the number_converter function is called with an argument, such as number_converter(ones), it does not need a prior declaration. The function number_converter is declared at the beginning of the program, so the compiler knows about its existence before any calls are made.

// The function call number_converter(ones) is made within the function itself (i.e., it's a recursive call). This call is made after the function has been declared but within the function's code.










