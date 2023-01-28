#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int number = 0;
    char result[20] = {'\0'};

    cout << "Enter A Number: " ;
    cin >> number;

    if (number % 2 == 0)
    {
        strcpy(result, "Even Number.");
    }
    else
    {
        strcpy(result, "Odd Number.");
    }

    cout << "The Entered Number Is: " << result << endl;
    return 0;
}