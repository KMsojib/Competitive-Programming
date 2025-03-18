#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(a[i]);
    }

    while (pq.size() > 1)
    {
        int f = pq.top();
        pq.pop();
        int s = pq.top();
        pq.pop();
        int new_el = f + s - 1;
        pq.push(new_el);
    }
    cout << pq.top() << endl;
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
