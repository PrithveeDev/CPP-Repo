#include <iostream>
using namespace std;

int main()
{
    int             counter = 0;
    int             nNumbers = 0; 
    unsigned int    sum = 0;

    cout << "Enter Limiting Value To Stop Loop: " ;
    cin >> nNumbers;

    for (counter = 0; counter < nNumbers; counter++)
    {
        // Imp! Do Any Function Here... 
        sum += counter;
    }
    cout << "Sum of N - Numbers: " <<  sum << endl;

    return 0;
} 

