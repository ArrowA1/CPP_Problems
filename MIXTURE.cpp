/* MIXTURE
# 
# Chef has A units of solid and B units of liquid. He combines them
# to create a mixture. What kind of mixture does Chef produce: a solution,
# a solid, or a liquid?

# A mixture is called :
# 1) A solution if A>0 and B>0,
# 2) A solid if B=0, or
# 3) A liquid if A=0.

# Constraints :
# 1≤T≤20
# 0≤A,B≤100
# A+B>0 */

#include <iostream>
using namespace std;

//store the resulting mixture
int results [20];

int main()
{
    int T;
    cin >> T;
    if(T >= 1 && T <= 20)
    {
        for (int i = 0; i < T; ++i)
        {
            int A,B;
            cin >> A >> B;
            if (A + B > 0)
            {
                if (A > 0 && B > 0)
                    results[i] = 1;
                else if (B == 0)
                    results[i] = 2;
                else
                    results[i] = 3;
            }
            else 
                results[i] = 0;
        }

        for (int i = 0; i < T; ++i)
        {
            if (results[i] == 1)
                cout << "Solution";
            else if (results[i] == 2)
                cout << "Solid";
            else if (results[i] == 3)
                cout << "Liquid";
            cout << endl;
        }
    }
    return 0;
}
            