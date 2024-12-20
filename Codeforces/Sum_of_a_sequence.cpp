#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int a = 3, d = 5;
    int n = (x - a) / d + 1;
    int m = (y - a) / d + 1;
    long long sum1 = (m * (2 * a + (m - 1) * d)) / 2;
    long long sum2 = ((n - 1) * (2 * a + (n - 2) * d)) / 2;
    cout << sum1 - sum2 << endl;

    return 0;
}
