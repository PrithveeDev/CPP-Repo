#include <iostream>
using namespace std; 



int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 5; i ++)
    {
        for (int j = 0; j <= i; j ++)
        {
            if ((i + j) % 2 == 0)
            {
                printf(" 1");
            } 
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }

    return 0;
}
