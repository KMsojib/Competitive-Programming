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


void solve(){
    ll n;   cin>>n;
    ll five = 0, zero = 0;
    for(int i=0;i<n;i++){
        ll x;   cin>>x;
        if(x == 5){
            five ++;
        }else{
            zero ++;
        }
    }

    five = (five/9) * 9;
    if(zero == 0){
        cout<<-1<<endl;
    }
    else if(five == 0 && zero > 0){
        cout<<"0\n";
    }
    else{
        while(five){
            cout<<5;
            five--;
        }
        while(zero){
            cout<<0;
            zero--;
        }
        cout<<endl;
    }


}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 