#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

multiset<ll> primeFactors(ll n)
{
    multiset<ll> pf;
    while (n % 2 == 0)
    {
        n /= 2;
        pf.insert(2);
    }
    for (ll i = 3; i <= sqrtl(n); i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
            pf.insert(i);
        }
    }
    if (n > 2)
    {
        pf.insert(n);
    }
    return pf;
}

int main()
{
    ll n;
    int k;
    cin >> n >> k;
    multiset<ll> st = primeFactors(n);

    if (st.size() < k)
    {
        cout << "-1" << endl;
    }
    else
    {
        while (st.size() > k)
        {
            auto it1 = st.begin();
            auto it2 = next(st.begin());
            ll combined = (*it1) * (*it2);
            st.erase(it1);
            st.erase(it2);
            st.insert(combined);
        }
        for (const auto &factor : st)
        {
            cout << factor << " ";
        }
        cout << endl;
    }
    cout << 4 * 4 * 4 * 4 * 4 << endl;
    return 0;
}