#include <iostream>

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << fixed << setprecision(2);

    double sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    double dif = num1 - num2;
    cout << "Difference: " << dife << endl;

    double prod = num1 * num2;
    cout << "Product: " << prod << endl;

    if (num2 != 0) {
        double quo = num1 / num2;
        cout << "Quotient: " << quo << endl;
    } else {
        cout << "Error: Division by zero" << endl;
    }
    return 0;
}