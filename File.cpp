#include <iostream>
#include <string>
using namespace std;

int main()
{
    float First_Number;
    float Second_Number;
    string operation;
    string plus = "+";
    string minus = "-";
    string multiply = "*";
    string divide = "/";

    cout << "Please enter your first number: ";
    cin >> First_Number;
    cout << "Please choose an operation (+, -, *, /): ";
    cin >> operation;

    if (operation == plus || operation == minus || operation == multiply || operation == divide)
    {
        cout << "Please enter your second number: ";
        cin >> Second_Number;

        if (operation == plus)
        {
            cout << First_Number << " + " << Second_Number << " = " << First_Number + Second_Number << endl;
        }
        else if (operation == minus)
        {
            cout << First_Number << " - " << Second_Number << " = " << First_Number - Second_Number << endl;
        }
        else if (operation == multiply)
        {
            cout << First_Number << " * " << Second_Number << " = " << First_Number * Second_Number << endl;
        }
        else if (operation == divide)
        {
            if (Second_Number != 0)
            {
                cout << First_Number << " / " << Second_Number << " = " << First_Number / Second_Number << endl;
            }
            else
            {
                cout << "Error: Division by zero is undefined." << endl;
            }
        }
    }
    else
    {
        cout << "Undefined operation." << endl;
    }

    return 0;
}