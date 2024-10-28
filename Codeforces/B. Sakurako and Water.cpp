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

const int N = 500+1;
void solve(){
    ll n;
    cin >> n;
    int arr[n][n];
    int cn =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    
    ll ans = 0;
    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j >= 0; j--){
            if(arr[i][j] < 0){
                int len = min(i, j);
                ll temp = -1 * arr[i][j];
                for(int k = 0; k <= len; k++){
                    arr[i-k][j-k] += temp;
                }
                ans += temp;
            }
        }
    }
    cout<<ans<<nline;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int test_case;
    cin >> test_case;
    
    while(test_case--){
        solve();
    }
    
    return 0;
}