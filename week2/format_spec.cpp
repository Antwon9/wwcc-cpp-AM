#include <iostream>
#include <cstdio>   // For printf function
using namespace std;

int main() {
    // Sample variables to display
    int integer_value = 42;
    float float_value = 3.14159265f;
    double double_value = 3.14159265;
    char char_value = 'X';
    const char* string_value = "Hello, World!";

    printf("Format Specifier Practice\n");
    printf("------------------------\n\n");

    // Integer formats
    printf("Integer formats:\n");
    printf("Decimal: %d\n", integer_value);              // %d - prints as decimal (base 10)
    printf("Hexadecimal: 0x%x\n", integer_value);        // %x - prints as hexadecimal (lowercase)
    printf("Octal: %o\n", integer_value);                // %o - prints as octal (base 8)
    printf("With width (5): |%5d|\n", integer_value);     // %5d - prints in width of 5, right-aligned by default
    printf("Left-aligned:   |%-5d|\n\n", integer_value);  // %-5d - left-align within width 5

    // Float formats
    printf("Float formats:\n");
    printf("Default: %f\n", float_value);                // %f - default float format (6 digits after decimal)
    printf("With precision (2): %.2f\n", float_value);    // %.2f - two digits after decimal point
    printf("Scientific: %e\n", float_value);             // %e - scientific notation
    printf("Fixed with precision (4): %.4f\n\n", double_value); // %.4f - fixed-point with 4 digits after decimal

    // Character and String formats
    printf("Character and String formats:\n");
    printf("Character: %c\n", char_value);               // %c - single character
    printf("String: %s\n", string_value);                // %s - C-style string
    printf("String with width (20): |%20s|\n", string_value); // %20s - right-aligned in width 20
    printf("Left-aligned string:     |%-20s|\n", string_value); // %-20s - left-aligned in width 20

    return 0;
}