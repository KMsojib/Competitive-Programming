#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int cn = 0;
    int mini = min(n, m), maxi = max(n, m);
    for (int i = 0; i <= maxi; i++)
    {
        for (int j = 0; j <= mini; j++)
        {
            if ((pow(i, 2) + j) == n && (i + pow(j, 2)) == m)
            {
                cn++;
            }
        }
    }
    cout << cn << endl;
    return 0;
}