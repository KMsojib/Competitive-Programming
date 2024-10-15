#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "ALPHA" << nline;
        cout << "IS SMALL" << nline;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "ALPHA" << nline;
        cout << "IS CAPITAL" << nline;
    }
    else
    {
        cout << "IS DIGIT" << nline;
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
