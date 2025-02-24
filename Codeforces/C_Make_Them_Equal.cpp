#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    char ch;
    cin >> ch;

    string s;
    cin >> s;

    int x = 0;
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == ch)
        {
            x = i + 1;
            count++;
        }
    }

    if (count == n)
    {
        cout << "0" << endl;
        return;
    }

    if (x > n / 2)
    {
        cout << "1\n"
             << x << endl;
    }
    else
    {
        cout << "2\n"
             << n << " " << n - 1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}