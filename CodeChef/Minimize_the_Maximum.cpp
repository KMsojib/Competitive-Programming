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

bool isPossible(vector<ll>a,ll mid){
    int n = a.size();
    for(int i=n-1;i>0;i--){
        if(a[i]>mid){
            a[i-1] += (a[i]-mid);
            a[i] = mid;
        }
    }
    return *max_element(a.begin(),a.end()) <= mid;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll low = 0, hi = 1e9;
    ll res = 1e9;
    while(low<=hi){
        ll mid = (low+hi)/2;
        if(isPossible(a,mid)){
            res = mid;
            hi = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<res<<nline;
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
