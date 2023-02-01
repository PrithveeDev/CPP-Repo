#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int counter = 0;

    cout << "Enter Number of Times You Wih To Run The Loop: " ;
    cin >> number; 

    while (counter < number)
    {
        counter ++; // Imp! Increase The Number, Otherswise It'll Fault At "int" Length
        cout << "While Loop At Number: " << counter << endl;
    }
    
    return 0; 
} 


