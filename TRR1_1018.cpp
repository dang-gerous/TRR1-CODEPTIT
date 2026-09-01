#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n))
        return 0;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 1 && B[i] == 1)
        {
            count++;
        }
    }
    cout << count << "\n";

    if (count > 0)
    {
        bool first = true;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == 1 && B[i] == 1)
            {
                if (!first)
                {
                    cout << " ";
                }
                cout << (i + 1);
                first = false;
            }
        }
    }

    return 0;
}
