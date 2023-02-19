#include <iostream>
using namespace std; 


int main(int argc, char const *argv[])
{
    uint32_t num = 0;
    cout << "Hello, Enter A Number: ";
    cin >> num;

    for (int i = num; i > 0; i --)
    {
        for (int j = i; j > 0; j --)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
