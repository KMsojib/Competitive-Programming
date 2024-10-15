#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    string N;
    cin >> N;

    size_t decimalPos = N.find('.');

    if (decimalPos != string::npos)
    {
        string integerPart = N.substr(0, decimalPos);
        string decimalPart = N.substr(decimalPos + 1);

        if (stoi(decimalPart) == 0)
        {
            cout << "int " << integerPart << endl;
        }
        else
        {
            cout << "float " << integerPart << " 0." << decimalPart << endl;
        }
    }
    else
    {
        cout << "int " << N << endl;
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
