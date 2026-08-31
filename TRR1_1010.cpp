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
                return true;
            }
            return false;
        }
        else
        {
            if (-c / b > 0)
            {
                return true;
            }
            return false;
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
                return true;
            }
            else
            {
                if (S > 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (delta == 0)
        {
            if (S > 0)
            {
                return true;
            }
            return false;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c;
    cin >> a >> b >> c;
    if (checkp(a, b, c))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}