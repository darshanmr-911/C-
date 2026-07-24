#include <iostream>
using namespace std;

int main()
{
    int first_number, second_number, sum;

    // Prompt user for input
    cout << "Enter two integers: ";

    // Store user inputs into variables
    cin >> first_number >> second_number;

    // Calculate total using the + operator
    sum = first_number + second_number;

    // Display the result
    cout << first_number << " + " << second_number << " = " << sum << endl;

    return 0;
}