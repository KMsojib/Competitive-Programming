#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    vector<int> brr(m);
    int sum = 0;
    for (int i = 0; i < m; ++i)
    {
        cin >> brr[i];
        sum += brr[i];
    }
    sum = sum % n;
    cout << arr[sum] << endl;
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
