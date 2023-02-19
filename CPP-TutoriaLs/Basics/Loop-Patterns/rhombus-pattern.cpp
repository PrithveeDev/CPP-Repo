#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int size = 5;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= (size - i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= size; j ++)
        {
            cout << "*";
        }

        printf("\n");
    }
    return 0;
}
