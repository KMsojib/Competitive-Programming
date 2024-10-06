#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using lld = long double;
using ull = unsigned long long;

const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1000000007;
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
    int n,m,h;  cin>>n>>m>>h;
    vector<vector<int>>vp(n);
    for(int i=0;i<n;i++){
        vector<int>x;
        for(int j=0;j<m;j++){
            cin>>x[j];
        }
        sort(x.begin(),x.end());
        vp[i]=x;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<vp[i].size();j++){
            cout<<vp[i][j]<<" ";
        }
        cout<<endl;
    }
    // int rudop = 0;
    // for(int i=0;i<vp[0].size();i++){
    //     rudop += vp[0][i];
    //     if(rudop >=h){
    //         rudop -= vp[0][i];
    //         break;
    //     }
    // }
    // cout<<rudop<<endl;

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
 