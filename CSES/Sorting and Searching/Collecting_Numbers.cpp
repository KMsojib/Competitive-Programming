#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    vector<long long> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (long long i = 0; i < a; i++)
    {
        cout << min(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1])) << " " << max(abs(v[i] - v[0]), abs(v[i] - v[a - 1])) << endl;
    }
    return 0;
}