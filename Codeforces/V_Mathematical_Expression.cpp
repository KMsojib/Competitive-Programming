#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    bool isCorrect = false;
    int result;

    if (s == '+')
    {
        result = a + b;
        isCorrect = (result == c);
    }
    else if (s == '-')
    {
        result = a - b;
        isCorrect = (result == c);
    }
    else if (s == '*')
    {
        result = a * b;
        isCorrect = (result == c);
    }

    if (isCorrect)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << result << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1; // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
