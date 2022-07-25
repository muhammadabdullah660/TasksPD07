#include <iostream>
#include <conio.h>
using namespace std;
// Main Function
main()
{
    // Variable Declaration
    float count, ton, minibus = 0, truck = 0, train = 0, sum = 0, per1 = 0.0, per2 = 0.0, per3 = 0.0, avg = 0.0;
    cout << "Enter count of cargo for transportation:- ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Enter tonage of current cargo :- ";
        cin >> ton;
        if (ton <= 3)
        {
            minibus = ton + minibus;
        }
        if (ton > 3 && ton <= 11)
        {
            truck = ton + truck;
        }
        if (ton > 11)
        {
            train = ton + train;
        }
    }
    sum = minibus + truck + train;
    per1 = (minibus / sum) * 100.0;
    per2 = (truck / sum) * 100.0;
    per3 = (train / sum) * 100.0;
    avg = ((minibus * 200) + (truck * 175) + (train * 120)) / sum;

    cout << "Percentage of the cargo by minibus: = " << per1 << "%" << endl;
    cout << "Percentage of the cargo by truck: = " << per2 << "%" << endl;
    cout << "Percentage of the cargo by train: = " << per3 << "%" << endl;
    cout << "Average Price " << avg;
}
