#include <iostream>
using namespace std;

int is_prime(unsigned int Number);

int main(int argc, char const *argv[])
{
    unsigned int counter    = 0;
    unsigned int number_a   = 0;
    unsigned int number_b   = 0;

    cout << "Enter NUmber A: ";
    cin >> number_a;

    cout << "Enter Number B: ";
    cin >> number_b;

    cout << "Finding Prime Numbers Between A & B..." << endl; 

    for (counter = number_a; counter < number_b; counter++)
    {
        if (is_prime(counter) == 1)
        {
            cout << "The Number: " << counter << " is Prime." << endl;
        }
        else
        {
            cout << "The Number: " << counter << " is Not Prime." << endl;
        }
    }

    return 0;
}


int is_prime(unsigned int Number)
{
    int status = 0;
    unsigned int counter = 0;

    for (counter = 2; counter < Number; counter++)
    {
        if (Number % counter == 0)
        {
            cout << "Number: " << Number << endl;
            status = 0;
            break;
        }
    }

    if ((counter == Number) || (counter < 2))
    {
        status = 1;
    }
    return status;
}