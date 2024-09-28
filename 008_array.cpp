/*
    Input Format
The first line of the input contains N,where  is the number of integers.
The next line contains N space-separated integers.

Output Format

Print the N integers of the array in the reverse order, space-separated on a single line.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num[n]; // declaring an array of size n
               // this loop will take input from user and store it in array
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    // this will print the reverse value of the array
    for (int i = n - 1; i >= 0; i--)
    {
        cout << num[i] << " ";
    }
}