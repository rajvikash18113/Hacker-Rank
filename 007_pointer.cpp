/*
The function is declared with a void return type, so there is no value to return.
Modify the values in memory so that a contains their sum and b contains their absoluted difference.
sum = |a+b|
diff = |a-b|
*/

#include <iostream>
using namespace std;

// creating a function named modify with void return type
void modify(int *p1, int *p2)    // taking 2 pointer integer as parameter of modify function
{
    int sum = *p1 + *p2;
    int diff = *p1 - *p2;
    *p1 = sum;               // containing value of sum in 1st pointer
    *p2 = abs(diff);        // containing absolute value of difference in 2nd pointer
                           // abs() function is used to return the absolute value i.e no signed value
    /*if we do not want to  use abs() function then we need to use below if condition */
    // if(diff < 0)
    // {
    //     diff = -(diff);
    // }
    // *p2 = (diff);
}

int main()
{
    int a, b;
    cin >> a >> b;
    modify(&a, &b);
    cout << a << endl;
    cout << b << endl;
}