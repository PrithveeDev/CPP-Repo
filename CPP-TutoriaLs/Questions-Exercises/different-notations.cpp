#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int num1 = 12; 
    int num2 = 012;
    int num3 = 0x1F;
    int num4 = 0b00100110;

    cout << "Hello, World In Number Systems." << endl;

    /* These All Number Will Be Printed in Integers As It's Not Specified. */
    cout << "Number1: " << num1 << endl;    
    cout << "Number2: " << num2 << endl;
    cout << "Number3: " << num3 << endl;
    cout << "Number4: " << num4 << endl;
    

    return 0;
}