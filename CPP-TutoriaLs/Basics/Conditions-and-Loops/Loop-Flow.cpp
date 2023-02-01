#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int counter = 0;
    
    while (counter < 100)
    {
        counter = counter + 1;
        if ( (float)(counter % 2) == 0)
        {
#if 0
            cout << "[Debug-Snippet] Curr Value of Counter: " << counter << endl;
            cout << "[Debug-Snippet] Curr Value of Modulos: " << (counter % 2) << endl;
#endif  
            continue;
        }
        
        cout << "[Debug-Snippet] Curr Value of Counter: " << counter << endl;
    }

    return 0;
}
