#include <iostream>
using namespace std; 

int main(int argc, char const *argv[])
{
    unsigned int    number  = 0;
    unsigned int    counter = 0;

    cout << "Enter Number For Checking: ";
    cin >> number;

    for (counter = 2; counter < number; counter++)
    {
        if (number % counter == 0)
        {   
            cout << "The Number: " << number << " is Not a Prime Number." << endl;
            break; 
        }
    }


    if ((number == counter) || (number < 2))
    {
        // Imp! This Meant The Loop Ran Completely.
        cout << "The Number: " << number << " is a Prime Number." << endl;
    }

    return 0;
}
