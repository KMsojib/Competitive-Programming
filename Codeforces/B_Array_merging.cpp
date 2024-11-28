#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lld = long double;
using ull = unsigned long long;
const ll mod=1000000007;


#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define nline "\n"

ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);} // lcm

bool assen(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool desen(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}


void solve(){
    int n;  cin>>n;
    std::vector<int> a(n+1);
    for(int i=1;i<=n;i++)   {cin>>a[i];}
    std::vector<int> b(n+1);
    for(int i=1;i<=n;i++)   {cin>>b[i];}

    std::vector<int> cn1(2*n+1),cn2(2*n+1);
    int idx = 1;
    for(int i=2;i<=n;i++){
        if(a[i-1] != a[i]){
            cn1[a[i-1]] = max(cn1[a[i-1]],i-idx);
            idx = i;
        }
    }
    cn1[a[n]] = max(cn1[a[n]],n-idx+1);

    idx = 1;
    for(int i=2;i<=n;i++){
        if(b[i-1] != b[i]){
            cn2[b[i-1]] = max(cn2[b[i-1]],i-idx);
            idx = i;
        }
    }
    cn2[b[n]] = max(cn2[b[n]],n-idx+1);

    int ans = 0;
    for(int i=1;i<=2*n;i++){
        ans = max(ans,cn1[i]+cn2[i]);
    }
    cout<<ans<<endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test_case=1;  cin>>test_case;
    while(test_case--){
        solve();
    }
    return 0;
}
