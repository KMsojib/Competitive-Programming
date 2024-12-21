#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i < n - k)
            cout << i << " ";
        else
            cout << 2 * n - i - k << " ";
    }
    return 0;
}