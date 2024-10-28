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
    ll n,t,s;
    cin>>n>>t>>s;
    std::vector<int> a(t);
    for(auto &x : a){
        cin>>x;
    }
    sort(vr(a));

    for(int i=1;i<=s;i++){
        int st; cin>>st;
        int pos = upper_bound(a.begin(),a.end(),st) - a.begin();

        // case:1 left side
        if(pos == 0){
            cout<<a[0] - 1<< nline;
        }
        // case:2 right side
        else if(pos == t){
            cout<<n-a[t-1]<<nline;
        }
        else{
            int mid = a[pos] - a[pos-1];
            cout<<mid / 2<<nline;
        }
    }
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
