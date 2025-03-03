#include <iostream>
#include <string>
using namespace std;

// Function to calculate factorial using a while loop
void factorialCalculator() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return;
    }

    unsigned long long factorial = 1;
    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
}

// Function to display a number pyramid using nested for loops
void numberPyramid() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print numbers
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
}

// Function to calculate the sum of even or odd numbers using a do-while loop
void sumOfEvenOrOdd() {
    int choice, n, sum = 0;
    cout << "Choose:\n1. Sum of even numbers\n2. Sum of odd numbers\nEnter your choice: ";
    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "Invalid choice!" << endl;
        return;
    }

    cout << "Enter an upper limit (N): ";
    cin >> n;

    int i = (choice == 1) ? 2 : 1; // Start from 2 for even, 1 for odd
    do {
        sum += i;
        i += 2;
    } while (i <= n);

    string type = (choice == 1) ? "even" : "odd";
    cout << "Sum of " << type << " numbers up to " << n << ": " << sum << endl;
}

// Function to reverse a string using a while loop
void reverseString() {
    string str;
    cout << "Enter a string: ";
    cin.ignore(); // Clear input buffer
    getline(cin, str);

    int length = str.length();
    int i = 0;
    while (i < length / 2) {
        swap(str[i], str[length - i - 1]);
        i++;
    }

    cout << "Reversed string: " << str << endl;
}

// Main function with menu interface
int main() {
    int choice;
    do {
        cout << "========= Interactive Utility Program =========" << endl;
        cout << "1. Factorial Calculator" << endl;
        cout << "2. Number Pyramid" << endl;
        cout << "3. Sum of Even or Odd Numbers" << endl;
        cout << "4. Reverse a String" << endl;
        cout << "5. Exit" << endl;
        cout << "==============================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                factorialCalculator();
                break;
            case 2:
                numberPyramid();
                break;
            case 3:
                sumOfEvenOrOdd();
                break;
            case 4:
                reverseString();
                break;
            case 5:
                cout << "Goodbye! Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}