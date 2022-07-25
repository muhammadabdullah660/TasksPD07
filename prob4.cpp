#include <iostream>
#include <conio.h>
using namespace std;
// Function Prototype
// Main Function
main()
{
    // Variable Declaration
    int n = 0;
    float num, p4, p2, p3, count2 = 0, count3 = 0, count4 = 0;
    cout << "Enter number of integers:- ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter Numbers :- ";
        cin >> n;
        if (n % 2 == 0)
        {
            count2++;
        }
        if (n % 3 == 0)
        {
            count3++;
        }
        if (n % 4 == 0)
        {
            count4++;
        }
    }
    p2 = (count2 / num) * 100.0;
    p3 = (count3 / num) * 100.0;
    p4 = (count4 / num) * 100.0;

    cout << "Percentage of the numbers that are divisible by 2 = " << p2 << "%" << endl;
    cout << "Percentage of the numbers that are divisible by 3 = " << p3 << "%" << endl;
    cout << "Percentage of the numbers that are divisible by 4 = " << p4 << "%" << endl;
}
