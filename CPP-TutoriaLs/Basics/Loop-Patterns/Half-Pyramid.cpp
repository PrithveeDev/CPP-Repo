#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    uint32_t num = 0;
    cout << "Enter The Number: ";
    cin >> num;

    for (int i = 0; i < num; i ++)
    {
        for (int j = num; j > 0; j --)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}
