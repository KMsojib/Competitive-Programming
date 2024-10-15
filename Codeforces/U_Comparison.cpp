#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int A, B;
    char S;

    cin >> A >> S >> B;

    bool isRight = false;

    if (S == '<' && A < B)
    {
        isRight = true;
    }
    else if (S == '>' && A > B)
    {
        isRight = true;
    }
    else if (S == '=' && A == B)
    {
        isRight = true;
    }

    if (isRight)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
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
