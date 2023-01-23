#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // Q. List Down Most Important Data - Types In C++.
    // Ans: Int, Float, Char, Double, Bool.

    int     num1 = 12;
    cout << "Hello, The Number Stored In Variable \"num1 (int)\" is : " << num1;
    cout << " - Size of Integer is " << sizeof(num1) << endl;

    float   num2 = 12.45;
    cout << "Hello, The Number Stored In Variable \"num2 (float)\" is : " << num2;
    cout << " - Size of Float is " << sizeof(num2) << endl;


    char    character = 'a';
    cout << "Hello, The Number Stored In Variable \"character (char)\" is : " << character;
    cout << " - Size of Character is " << sizeof(character) << endl;

    char    string[50] = {'\0'};
    strcpy(string, "Hello, World!");
    cout << "Hello, The Number Stored In Variable \"string (char - array)\" is : " << string;
    cout << " - Size of string is " << sizeof(string) << endl;


    double  dbl = 12.901;
    cout << "Hello, The Number Stored In Variable \"dbl (double)\" is :" << dbl;
    cout << " - Size of Double is " << sizeof(dbl) << endl;


    bool    boolean = true;
    cout << "Hello, The Number Stored In Variable \"boolean (bool)\" is :" << boolean;
    cout << " - Size of Boolean is " << sizeof(boolean) << endl;


    short int   short_data = 12;
    cout << "Hello, The Number Stored In Variable \"short_data (short - int)\" is :" << short_data;
    cout << " - Size of Short-Int is " << sizeof(short_data) << endl;

    long int    long_data = 13;
    cout << "Hello, The Number Stored In Variable \"long_data (long int)\" is :" << long_data;
    cout << " - Size of Long-Int is " << sizeof(long_data) << endl;

    return EXIT_SUCCESS;
}