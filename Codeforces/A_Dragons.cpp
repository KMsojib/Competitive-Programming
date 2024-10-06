#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> s >> n;
        vector<pair<ll, ll>> vp;
        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            vp.push_back({x, y});
        }

        sort(vp.begin(), vp.end());
        bool is_he_killed = true;
        ll strength = s;
        for (auto it : vp)
        {
            if (strength > it.first)
            {
                strength += it.second;
            }
            else
            {
                is_he_killed = false;
                break;
            }
        }

        if (is_he_killed)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}

/*
solution:
    1. se tar less strength er gula re age mere pelbe
    2. then extra strength ja pabe oi ta deye baki der sate fight korbe

    aproach is:
    sort it by dragon strength
    then check any dragon strength is greater then or not:
        if greater then:
            then NO

    after all check if all dragon killed then YES

    TC: O(n log n)
*/