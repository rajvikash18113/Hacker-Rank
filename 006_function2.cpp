// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

// I have already solved this question but this time i am solving it through another method

#include<iostream>
using namespace std;

int max_of_given_numbers(int a, int b, int c, int d)
{
    int max = 0;

    if(a > b && a > c && a > d)
    {
        max = a;
    }
    else if(b > a && b > c && b > d)
    {
        max = b;
    }
    else if(c > a && c > b && c > d)
    {
        max = c;
    }
    else if(d > a && d > b && d > c)
    {
        max = d;
    }
        return max;
}

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int result = max_of_given_numbers(a,b,c,d);
    cout << result;
}