/*
Input Format
Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Sample Input
3 12345678912345 a 334.23 14049.30493

Sample Output
3
12345678912345
a
334.230
14049.304930000
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring Variables 
    int i;
    long l;
    char ch;
    float f;
    double d;

    //Taking inputs from user
    cin >> i >> l >> ch >> f >> d;
    
    // Printing Output 
    cout << i << endl;
    cout << l << endl;
    cout << ch << endl;
    cout << fixed << setprecision(3) << f << endl; // fixed is used to print fixed number value 
    cout << fixed << setprecision(9) << d << endl;
}


/* NOTE : working on hacker rank compiler but not working in VS Code*/
