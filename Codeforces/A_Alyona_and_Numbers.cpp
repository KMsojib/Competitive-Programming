#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long cn = 0;
    vector<long long> a(5, 0), b(5, 0);
    for (int i = 1; i <= n; i++)
        a[i % 5]++;
    for (int j = 1; j <= m; j++)
        b[j % 5]++;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) % 5 == 0)
            {
                cn += a[i] * b[j];
            }
        }
    }
    printf("%lld\n", cn);
}

/*
Detailed Explanation with Example:
Let's say n = 7 and m = 10.

Count Remainders for n = 7:

Numbers from 1 to 7 have remainders 1, 2, 3, 4, 0, 1, 2 when divided by 5.
Vector a will be [1, 2, 2, 1, 1] because:
1 number has remainder 0.
2 numbers have remainder 1.
2 numbers have remainder 2.
1 number has remainder 3.
1 number has remainder 4.
Count Remainders for m = 10:

Numbers from 1 to 10 have remainders 1, 2, 3, 4, 0, 1, 2, 3, 4, 0 when divided by 5.
Vector b will be [2, 2, 2, 2, 2] because:
2 numbers have remainder 0.
2 numbers have remainder 1.
2 numbers have remainder 2.
2 numbers have remainder 3.
2 numbers have remainder 4.
Count Valid Pairs:

Now, the code checks pairs of remainders (i, j) to see if (i + j) % 5 == 0:
For (0, 0): 1 * 2 = 2
For (1, 4): 2 * 2 = 4
For (2, 3): 2 * 2 = 4
For (3, 2): 1 * 2 = 2
For (4, 1): 1 * 2 = 2
Summing up all these products, we get 2 + 4 + 4 + 2 + 2 = 14.
So, the output will be 14, which is the number of pairs (i, j) such that 1 <= i <= 7 and 1 <= j <= 10 where (i + j) % 5 == 0.
*/