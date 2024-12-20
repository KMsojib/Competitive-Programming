#include <bits/stdc++.h>
using namespace std;

long long sumDigits(long long no)
{
    long long sum = 0;
    while (no > 0)
    {
        sum += no % 10;
        no /= 10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; // cin>>t;
    while (t--)
    {
        long long n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            cout << sumDigits(x) << " ";
        }
        cout << endl;
    }
    return 0;
}
