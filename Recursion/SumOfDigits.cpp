#include <bits/stdc++.h>
using namespace std;

int sod(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + sod(n / 10));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sod(n) << endl;
    }

    return 0;
}
