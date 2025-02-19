#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        // int sum2 = 0;
        // int temp = n / 2; // 2)5(
        // sum2 = temp * b;// b er dam 
        // if (n % 2)
        // {
        //     sum2 += a;
        // }
        int sum1 = a * n; // sudu a use kore sob pen kinte caibo
        int sum2 = ((n/2)*b + (n%2)*a); // first use b then a

        cout << min(sum1, sum2) << endl;
    }

    return 0;
}

