#include <iostream>
#include <string>
using namespace std;

// Class for integer addition
class Integer {
private:
    int value;

public:
    // Constructor
    Integer(int v) : value(v) {}

    // Overload + operator for addition of integers
    Integer operator + (const Integer& other) {
        return Integer(value + other.value);
    }

    // Function to display the integer value
    void display() {
        cout << "Integer: " << value << endl;
    }
};

// Class for string concatenation
class MyString {
private:
    string value;

public:
    // Constructor
    MyString(string v) : value(v) {}

    // Overload + operator for string concatenation
    MyString operator + (const MyString& other) {
        return MyString(value + other.value);
    }

    // Function to display the string value
    void display() {
        cout << "String: " << value << endl;
    }
};

int main() {
    // Demonstrating integer addition
    Integer int1(5);
    Integer int2(10);
    Integer int3 = int1 + int2; // Calls overloaded + operator
    int3.display(); // Output: Integer: 15

    // Demonstrating string concatenation
    MyString str1("Hello, ");
    MyString str2("World!");
    MyString str3 = str1 + str2; // Calls overloaded + operator
    str3.display(); // Output: String: Hello, World!

    return 0;
}
