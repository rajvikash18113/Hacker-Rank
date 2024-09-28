/*
Input Format
You will be given two positive integers,  a and b (a <= b), separated by a newline.

Output Format
For each integer n in the inclusive interval (a, b) :

If ,( 1 <= n <= 9) then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if (n > 9) and it is an even number, then print "even".
Else if (n > 9) and it is an odd number, then print "odd".
Note:

Sample Input
8
11
                Sample Output
                eight
                nine
                even
                odd
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;   // initalizing 2 variable
    cin >> a;
    cin >> b; // taking input from the user

     // loop for printing English representation of (1 <= n <= 9) in lowercase.
    // this loop will print english representation of numbers from (a to 9) in case of (a > 9).
    for (int n = a; n >= a && n <= b; n++) // here n is initialized with a

    {

        switch (n)
        {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "Eight" << endl;
            break;
        case 9:
            cout << "Nine" << endl;
            break;
        }
    }

     // this loop will check numbers which is greater than 9 and smaller than b
    // if the number b/w 10 to b is even then it will print even otherwise it will print odd
    for (int n = 10; n > 9 && n <= b; n++)
    {
        if (n % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
}