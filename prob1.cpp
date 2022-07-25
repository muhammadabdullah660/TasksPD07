#include <iostream>
#include <conio.h>
using namespace std;
// Function Prototype
void amplify(int num);
// Main Function
main()
{
    // Variable Declaration
    int num;
    cout << "Enter an integer:- ";
    cin >> num;
    amplify(num);
}
void amplify(int num)
{
    int res;
    for (int i = 1; i <= num; i++)
    {
        if (i % 4 == 0)
        {
            res = i * 10;
            cout << res << " , ";
        }
        else
        {
            cout << i << " , ";
        }
    }
}
