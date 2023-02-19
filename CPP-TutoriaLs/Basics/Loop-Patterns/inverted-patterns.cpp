#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    for (int i = 6; i > 0; i --)
    {
        for (int j = 1; j < i; j ++)
        {
            printf("%d", j);
        }
        cout << endl;
    }
    return 0;
}
