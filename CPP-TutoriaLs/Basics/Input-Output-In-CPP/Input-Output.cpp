#include <iostream>
using namespace std;


int main()
{
    int amountx = 0;
    int amounty = 0;

    cout << "Enter Amount For X: " ;
    cin >> amountx;

    cout << "Enter Amount For Y: " ; 
    cin >> amounty;

    cout << "The Difference Between Amount X and Y is: " << (amountx + amounty) << endl;
    return 0;
}