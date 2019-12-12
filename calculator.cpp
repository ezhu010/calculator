#include <iostream>
using namespace std;
int main()
{
    int first_number;
    int second_number;
    char operation;
    int result;
    cout << "Enter your first number: ";
    cin >> first_number;
    cout << "Enter your second number: ";
    cin >> second_number;
    cout << "Enter an operation: ";
    cin >> operation;
    if (operation == '+')
    {
        result = first_number + second_number;
        cout << "The result is " << result << endl;
    }
    else if (operation == 'x' || operation == '*')
    {
        result = first_number * second_number;
        cout << "The result is " << result << endl;
    }
    if (operation == '/')
    {
        result = first_number / second_number;
        cout << "The result is " << result << endl;
    }
    if (operation == '-')
    {
        result = first_number - second_number;
        cout << "The result is " << result << endl;
    }
    return 0;
}