 #include <iostream>
using namespace std;

int reverseInteger(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;        // Get the last digit
        reversed = reversed * 10 + digit;  // Append the digit to the reversed number
        n /= 10;                   // Remove the last digit from n
    }
    return reversed;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int reversedNumber = reverseInteger(n);
    cout << "Reversed integer: " << reversedNumber << endl;

    return 0;
}

