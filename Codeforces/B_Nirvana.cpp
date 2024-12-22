#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline "\n"
ll mul(ll n) {
    ll ans = 1;
    while (n) {
        ans *= n % 10;
        n /= 10;
    }
    return ans;
}
int main() {
    ll n;
    cin >> n;

    if (n < 10) {
        cout << n << nline;
        return 0;
    }

    string s = to_string(n);
    ll maxi = mul(n);

    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '0') continue;

        string temp = s;
        temp[i] = (temp[i] - '0' - 1) + '0';
        for (size_t j = i + 1; j < temp.size(); ++j) {
            temp[j] = '9';
        }
        ll candidate = stoll(temp);
        maxi = max(maxi, mul(candidate));
    }

    cout << maxi << nline;
    return 0;
}