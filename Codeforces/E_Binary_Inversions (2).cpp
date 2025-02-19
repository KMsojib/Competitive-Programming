#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lld = long double;
using ull = unsigned long long;

const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1000000007;

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<pll> vpll;
typedef vector<string> vs;

#define sz(a) (int)a.size()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define YES cout<<"YES\n";
#define NO cout<<"NO\n"
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()

ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);} // lcm

bool assen(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool desen(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

ll inverse(vll &a){
    ll n = sz(a)-1;
    ll zero = 0, ans = 0;
    for(ll i = n;i>=0;i--){
        if(a[i]==0){
            zero++;
        }
        else{
            ans+=zero;
        }
    }
    return ans;
}

void solve(){
    ll n;   cin>>n;
    vll a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll ans = inverse(a);
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=1;
            ans = max(ans,inverse(a));
            a[i]=0;
            break;
        }
    }

    for(ll i=n-1;i>=0;i--){
        if(a[i]==1){
            a[i]=0;
            ans = max(ans,inverse(a));
            a[i]=1;
            break;
        }
    }
    cout<<ans<<endl;
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 

/*
 maximum inversion:
    1. if flip 1 then flip array er last e korle optimal
    2. if flip 0 then flib array er first e korle optimal
    
    exmaple:
    1 0 1 1 0 0 0 1
    flip 2nd 0 then array look:
        1 1 1 1 0 0 0 1
        ans = 12
    flip nth index then array look:
        1 0 1 1 0 0 0 0
        ans = 13

    so ans should be maximum--> 13

*/