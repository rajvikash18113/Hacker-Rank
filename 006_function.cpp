// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

#include <iostream>
using namespace std;

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
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int result = max_of_four_num(a, b, c, d);
    cout << result;
}