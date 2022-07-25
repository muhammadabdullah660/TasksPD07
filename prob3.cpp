#include <iostream>
#include <conio.h>
using namespace std;
// Main Function
main()
{
    // Variable Declaration
    int days, patients = 0, treated = 0, totalTreated = 0, totalUntreated = 0, untreated = 0, doctors = 7, train = 0, sum = 0, per1 = 0.0, per2 = 0.0, per3 = 0.0, avg = 0.0;
    cout << "Enter Number of Days:- ";
    cin >> days;

    for (int i = 1; i <= days; i++)
    {
        cout << "Enter Day " << i << " Patients :- ";
        cin >> patients;
        if (i % 3 == 0)
        {
            if (untreated > treated)
            {
                doctors++;
            }
        }
        if (patients <= doctors)
        {
            totalTreated = totalTreated + patients;
        }
        else
        {
            totalTreated = totalTreated + doctors;
            totalUntreated = (doctors - patients) + totalTreated;
        }
    }

    cout << "Treated = " << totalTreated << endl;
    cout << "Untreated = " << totalUntreated << endl;
}
