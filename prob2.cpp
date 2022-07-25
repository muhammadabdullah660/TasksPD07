#include <iostream>
#include <conio.h>
using namespace std;
// Function Prototype
int triangle(int num);
// Main Function
main()
{
    // Variable Declaration
    int num = 0, res = 0;
    cout << "Enter triangular number sequence:- ";
    cin >> num;
    res = triangle(num);
    cout << res;
}
int triangle(int num)
{
    int res = 0;
    for (int i = 1; i <= num; i++)
    {

        res = i + res;
    }

    return res;
}
