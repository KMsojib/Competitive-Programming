#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void simple_sieve(ll limit, vector<ll> &primes) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (ll i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

void segmented_sieve(ll n, ll k) {
    ll limit = sqrt(k) + 1;
    vector<ll> primes;
    simple_sieve(limit, primes);

    vector<bool> is_prime(k - n + 1, true);
    for (ll p : primes) {
        ll start = max(p * p, (n + p - 1) / p * p);
        for (ll j = start; j <= k; j += p) {
            is_prime[j - n] = false;
        }
    }

    for (ll i = 0; i <= k - n; i++) {
        if (is_prime[i] && (n + i) >= 2) {
            cout << n + i << "\n";
        }
    }
    cout<<endl;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    segmented_sieve(n, k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
