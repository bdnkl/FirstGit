#include <iostream>

using namespace std;

/**
    * Berechnet das Maximum eines Feldes
    * Parameter: feld - Das Feld
    * Rueckgabe: das Maximum
*/
int maximum_feld( int feld[] )
{
    int Max = 0;

    for ( int i = 0 ; i < 6 ; i += 1 )
    {
        if ( feld[i] > Max)
            Max = feld[i];
    }

    return Max;
}


int main()
{
    int feld[6] = {1,3,6,2,3,4};

    cout << maximum_feld(feld) << endl;

    return 0;
}

