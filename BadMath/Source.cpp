

#include <iostream>
#include <iomanip>

using namespace std;

float average(int i1, int i2, int i3)
{
    int sum = i1 + i2 + i3;

    // Check for division by zero
    if (sum == 0)
    {
        cout << "Error: Division by zero." << endl;
        return 0; //  choose to return a specific value or handle the error differently
    }

    return static_cast<float>(sum) / 3.0f;
}

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;

    cout << "This program calculates the average of three numbers." << endl;

    cout << "First number: ";
    if (!(cin >> n1))
    {
        cout << "Error: Invalid input. Please enter an integer." << endl;
        return 1;
    }

    cout << "Second number: ";
    if (!(cin >> n2))
    {
        cout << "Error: Invalid input. Please enter an integer." << endl;
        return 1;
    }

    cout << "Third number: ";
    if (!(cin >> n3))
    {
        cout << "Error: Invalid input. Please enter an integer." << endl;
        return 1;
    }

    float a = average(n1, n2, n3);

    cout << setprecision(1) << fixed << "The average is " << a << endl;

    return 0;
}
