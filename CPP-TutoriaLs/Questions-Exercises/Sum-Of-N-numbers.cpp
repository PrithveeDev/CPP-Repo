#include <iostream>
using namespace std; 


int main()
{
    unsigned int counter    = 0; 
    unsigned int sum        = 0;
    unsigned int number     = 0;

    cout << "Hello, Enter The N - Number You Wish To Sum: ";
    cin >> number;

    for (counter = 0; counter < number; counter ++)
    {
        sum = sum + counter;
    }

    cout << "Hello, After Calculation We Found The Sum To Be: " << sum << endl;

    return 0;
}