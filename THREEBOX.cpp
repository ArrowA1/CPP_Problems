#include <iostream>
using namespace std;

int main ()
{
    int T, result[100];
    cin >> T;
    for ( int i = 0; i < T; ++i )
    {
        int A, B, C, D, n = 0;
        cin >> A >> B >> C >> D;
        if ( C + B <= D || C + A <= D )
        {
            if ( C + B + A <= D)
                n = 1;
            else
                n = 2;
        }
        else if ( B + A <= D)
            n = 2;
        else
            n = 3;
        result[i] = n;
    }

    for ( int i = 0; i < T; ++i)
        cout << result[i] << endl;
}