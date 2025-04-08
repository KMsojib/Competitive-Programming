#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int LIMIT = 10000000; // Precompute primes up to 10^7
vector<bool> isPrimeArray(LIMIT + 1, true);

void sieve() {
    isPrimeArray[0] = isPrimeArray[1] = false;
    for (int i = 2; i * i <= LIMIT; i++) {
        if (isPrimeArray[i]) {
            for (int j = i * i; j <= LIMIT; j += i) {
                isPrimeArray[j] = false;
            }
        }
    }
}

bool isPrime(long long n) {
    if (n <= LIMIT) return isPrimeArray[n];
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    string s = to_string(n);
    string num = "";
    for (int i = 0; i < k; i++) {
        num += s;
    }
    
    if (num.size() > 18) {
        cout << "NO" << endl;
        return;
    }
    ll val = stoll(num);
    if (isPrime(val)) {
       cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve(); // Precompute primes

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}