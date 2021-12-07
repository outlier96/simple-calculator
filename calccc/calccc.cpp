// calccc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
        char operand;
        float num1, num2;
        cout<<" a simple calculator \n choose operands for type of  calculation to be performed: % is modulus \n";

        cout << "Enter operand: +, -, *, /,%: ";
        cin >> operand;
        //calculator accepts only 2 numbers

        cout << "Enter 2 numbers\n";
        cout << "press enter after each input\n";

        cin >> num1 >> num2;

        switch (operand) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        case '%':
            cout << num1 << " % " << num2 << " = " << fmod(num1, num2);
                break;
        
        default:
            // If the operand is other than +, -, * ,/ or %, error message is shown
            cout << "Error! operand is not correct";
            break;
        }

        return 0;
    

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to operanden this project again, go to File > operanden > Project and select the .sln file
