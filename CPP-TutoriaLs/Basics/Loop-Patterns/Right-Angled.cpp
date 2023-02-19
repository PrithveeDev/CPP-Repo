#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    uint32_t num = 0;
    cout << "Hello, Enter Any Number: ";
    cin >> num;
    
    /* How To Utilize Loops - For Advanced Tasks.. */
    for (int i = 0; i < num; i ++)
    {
        for (int j = 0; j < i; j ++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
