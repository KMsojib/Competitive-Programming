#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define nline "\n"

/*
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
*/

const int MAX = 1000000;
bool prime[MAX + 1];

void sieve() {
    for (int i = 0; i <= MAX; ++i) {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for (ll i = 2; i * i <= MAX; ++i) {
        if (prime[i]) {
            for (ll j = i * i; j <= MAX; j += i) {
                prime[j] = false;
            }
        }
    }
}

int nextPrime(int start) {
    while (start <= MAX && !prime[start]) {
        start++;
    }
    return start;
}

void solve() {
    ll n;
    cin >> n;
    ll a = nextPrime(1 + n);
    ll b = nextPrime(a + n);
    cout << 1ll * a * b << nline;
}

int main() {
    sieve();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}