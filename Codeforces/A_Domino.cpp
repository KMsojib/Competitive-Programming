#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
	int n;
	cin >> n;
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		sum1 += x;
		sum2 += y;
	}

	if (sum1 % 2 == 0 && sum2 % 2 == 0)
	{
		cout << 0 << endl;
	}
	else if (sum1 % 2 == 1 && sum2 % 2 == 1)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t=1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
