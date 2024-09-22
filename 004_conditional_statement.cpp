/*
 Given a positive integer , do the following:

 If (1 <= n <= 9), print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
 If (n > 9), print Greater than 9
*/

#include <iostream>
using namespace std;

int main()
{
    int n;                // declaring a variable n
    cin >> n;             // taking input from the user for n
    if (n >= 1 && n <= 9) // defining condition
    {
        switch (n)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        }
    }
    else  // if n is greater than 9 them execute this loop

    {
        cout << "Greater than 9";
    }
}
