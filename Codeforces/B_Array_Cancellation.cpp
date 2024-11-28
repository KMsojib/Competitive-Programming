#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        long long n;
        std::cin >> n;
        long long crn = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            std::cin >> x;
            crn = max(0LL, crn + x);
        }
        std::cout << crn << endl;
    }
}