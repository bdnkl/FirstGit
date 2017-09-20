#include <iostream>

using namespace std;

int main()
{
    int feld[6] = {1,3,6,2,3,4};
    int Max = 0;

    for ( int i = 0 ; i < 6 ; i += 1 )
    {
        if ( feld[i] > Max)
            Max = feld[i];
    }

    cout << Max << endl;

    return 0;
}

