#include <iostream>
using namespace std;

bool checkp(double a, double b, double c)
{
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                return 1;
            }
            return 0;
        }
        else
        {
            if (-c / b > 0)
            {
                return 1;
            }
            return 0;
        }
    }
    else
    {
        double delta = b * b - 4 * a * c;
        double S = -b / 2 * a;
        double P = c / a;
        if (delta > 0)
        {
            if (P < 0)
            {
                return 1;
            }
            else
            {
                if (S > 0)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
        }
        else if (delta == 0)
        {
            if (S > 0)
            {
                return 1;
            }
            return 0;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c;
    cin >> a >> b >> c;
    cout << checkp(a, b, c) << endl;
    return 0;
}