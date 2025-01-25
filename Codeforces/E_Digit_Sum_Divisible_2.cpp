#include <bits/stdc++.h>
using namespace std;
int digit_sum(long long n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool is_good_integer(long long n)
{
    return n % digit_sum(n) == 0;
}

pair<long long, long long> solve(const string &strN)
{
    long long N = stoll(strN);
    for (long long a = N; a < 2 * N; ++a)
    {
        if (is_good_integer(a) && is_good_integer(a + 1))
        {
            return {a, a + 1};
        }
    }
    return {-1, -1};
}

int main()
{
    string N;
    cin >> N;
    auto result = solve(N);
    if (result.first != -1)
    {
        cout << result.first << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}