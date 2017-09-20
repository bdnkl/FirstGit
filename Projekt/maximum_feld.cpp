#include "maximum_feld.h"

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
