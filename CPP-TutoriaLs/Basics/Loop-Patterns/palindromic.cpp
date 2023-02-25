#include <iostream> 
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 6; 
    int i, j, k, l;
    for (i = 1; i <= n; i ++)
    {
        for (j = 1; j <= (n - i); j ++)
        {
            cout << " ";
        }

        k = i;
        for (j; j < n; j ++)
        {
            cout << k--;
        }

        k = 2;
        for (l = 1; l < k; l++)
        {
            cout << l;
        }
        cout << endl; 
    }
    return 0;
}
