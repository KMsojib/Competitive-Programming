#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    std::string s;
    std::cin >> s;
    std::cout << count(s.begin(), s.end(), '1') << endl;
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
