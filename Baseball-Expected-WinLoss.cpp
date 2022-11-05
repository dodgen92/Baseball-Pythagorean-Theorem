
#include <iostream>
#include <iomanip>
using namespace std;




// Simple model of Baseballs Pythagorean Theorem with an Exponent fixed to 2
int main()
{
    float RunsScored, RunsAllowed;
    cout << "Enter runs scored ";
    cin >> RunsScored;
    cout << "Enter runs allowed ";
    cin >> RunsAllowed;

    float Ratio = RunsScored / RunsAllowed;

    float WinPct = pow(Ratio, 2) / (pow(Ratio, 2) + 1);

    float ExpectedWins = 162 * WinPct;



    cout << ExpectedWins;


}
