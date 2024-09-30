#include <iostream>
using namespace std;

class Calculator
{
public:
    // Function to add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Function to add three integers (overloaded function)
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator calc;

    cout << "Sum of 2 and 3: " << calc.add(2, 3) << endl;

    cout << "Sum of 2, 3, and 4: " << calc.add(2, 3, 4) << endl;

    return 0;
}
