#include <iostream>
using namespace std;

int main ()
{
    int T, X, result [1000];
    cin >> T;
    for ( int i = 0; i < T; ++i )
    {
        cin >> X;
        if ( X % 10 == 5)
            result [i] = 1;
        else if ( X % 10 == 0)
            result [i] = 0;
        else
            result [i] = -1;
    }

    for ( int i = 0; i < T; ++i )
        cout << result [i] << endl;
}