// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

#include <iostream>
using namespace std;

// function to return the maximum number of given 4 numbers
int max_of_four_num(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > c && b > d)
    {
        return b;
    }
    else if (c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    int w, x, y, z;
    cin >> w;
    cin >> x;
    cin >> y;
    cin >> z;
    int result = max_of_four_num(w,x,y,z); // calling the function
    cout << result;  // printing the result(maximum number)
}