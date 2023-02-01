#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int             counter = 9;
    unsigned char   debug_flag = 0x01; 
    
    do
    {
        if (counter > 0)
        {
            --counter;
        }
        
        if (debug_flag == 0x01)
        {
            cout << "The Curr, Value of Counter:" << counter << endl;
        }

    } while (counter > 0);
    
    return 0;
}
