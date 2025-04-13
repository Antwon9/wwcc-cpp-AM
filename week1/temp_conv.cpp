#include <iostream>

int main() {
    double temperature;
    char unit;

    std::cout << "Enter temperature value: ";
    std::cin >> tempe;

    std::cout << "Enter temperature unit (C for Celsius, F for Fahrenheit): ";
    std::cin >> unit;

    cout << fixed << setprecision(2);

    if (unit == 'C') {
        double fahrenheit = (tempe * 9.0 / 5.0) + 32;
        std::cout << tempe << "°C is equal to " << fahrenheit << "°F" << std::endl;
    } else if (unit == 'F') {
        double celsius = (tempe - 32) * 5.0 / 9.0;
        std::cout << tempe << "°F is equal to " << celsius << "°C" << std::endl;
    } else {
        std::cout << "Invalid unit entered. Please enter 'C' or 'F'." << std::endl;
    }
    return 0;
}