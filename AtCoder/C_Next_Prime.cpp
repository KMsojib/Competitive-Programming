#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nline "\n"
const int N = 1e5 + 5;
bool prime[N];
void sieve()
{
    for (int i = 0; i < N; i++)
    {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
int main()
{
    ll n;
    cin >> n;
    sieve();
    if(prime[n] == true)
    {
        cout<<n<<nline;
    }
    else
    {
        while(!prime[n])
        {
            n++;
        }
        cout<<n<<nline;
    }
    return 0;
}