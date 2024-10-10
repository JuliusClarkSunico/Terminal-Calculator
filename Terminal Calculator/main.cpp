#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main()
{
    int sum, difference, product, remainder, quotient, choice, userInput_1, userInput_2;
    char operatorSymbol[] = {'+', '-', 'x', '/'};
    string operatorName[] = {"addition", "Subtraction", "Multiplication", "Division"};
    string operatorDoes[] = {"plus", "minus", "multiplied by", "divided by"};

    bool choosingOperator = true;


    while (choosingOperator)
    {
        cout 
        << "\n1) Addition\n"
        << "2) Subtraction\n"
        << "3) Multiplication\n"
        << "4) Division\n"
        << "Choose an operator: ";

        cin >> choice;

        //Error handling
        if (choice > 4 || choice < 1)
        {
            cout << "\nPlease enter a valid choice (1, 2, 3, 4)" << endl;
        }
        else if (choice < 4 || choice > 1)
        {
            //If the user input is valid, start the maths
            cout << "\nYou chose " << operatorName[choice - 1] << "!\n"
            << "Pick a number: ";
            cin >> userInput_1;

            cout << userInput_1 << " " << operatorDoes[choice - 1] << "? ";
            cin >> userInput_2;

            if ((choice - 1) == 0)
            {   
                sum = userInput_1 + userInput_2;
                cout
                << "--------------------\n"
                << userInput_1 << " " << operatorDoes[choice - 1]
                << " is equal to " << sum << "\n";
            }
            else if ((choice - 1) == 1)
            {
                difference = userInput_1 - userInput_2;
                cout
                << "--------------------\n"
                << userInput_1 << " " << operatorDoes[choice - 1]
                << " is equal to " << difference << "\n";
            }
            else if ((choice - 1) == 2)
            {
                product = userInput_1 * userInput_2;
                cout
                << "--------------------\n"
                << userInput_1 << " " << operatorDoes[choice - 1]
                << " is equal to " << product << "\n";
            }
            else if ((choice - 1) == 3)
            {
                quotient = userInput_1 / userInput_2;
                remainder = userInput_1 % userInput_2;

                cout
                << "--------------------\n"
                << userInput_1 << " " << operatorDoes[choice - 1]
                << " is equal to " << quotient
                << "\nwith a remainder of " << remainder << "\n";
            }
        }
    }

    return 0;
}