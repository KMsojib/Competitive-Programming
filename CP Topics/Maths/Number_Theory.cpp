#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// sieve of eratosthenes for prime numbers
const int N = 100000000;
ll prime[N];
vector<int> pr;
void sieve(){
    for (int i = 2; i < N; i++){
        if (prime[i] == 0){
            pr.push_back(i);
            for (int j = i * i; j < N; j += i){
                prime[j] = 1;
            }
        }
        prime[i] ^= 1;
    }
}

// count number of divisor in sqr(n) Time complexity
ll cnt_div(ll n){
    ll cn = 0;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            cn++;
        }
        if (i != n / i){
            cn++;
        }
    }
    return cn;
}

int main()
{

    cnt_div(10);
    return 0;
}
