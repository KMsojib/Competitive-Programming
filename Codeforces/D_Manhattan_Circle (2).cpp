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
    int n,m;    cin>>n>>m;
    vector<vector<char> > a(n, vector<char>(m));
    for(int i=0;i<n;i++){
        string s;   cin>>s;
        for(int j=0;j<m;j++){
            a[i][j]=s[j];
        }
    }

    int first_row = -1, second_row = -1;
    int first_col = -1, second_col = -1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == '#'){
                if(first_row == -1){
                    first_row = i;
                    break;
                }
            }
        }
        if(first_row != -1){
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            if(a[i][j] == '#'){
                if(second_row == -1){
                    second_row = i;
                    break;
                }
            }
        }
        if(second_row != -1){
            break;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j][i] == '#'){
                if(first_col == -1){
                    first_col = i;
                    break;
                }
            }
        }
        if(first_col != -1){
            break;
        }
    }

    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if(a[j][i] == '#'){
                if(second_col == -1){
                    second_col = i;
                    break;
                }
            }
        }
        if(second_col != -1){
            break;
        }
    }

    first_row ++, second_row++, first_col++,second_col++;

    cout<<(first_row +(second_row - first_row)/2)<<" "<<(first_col + (second_col - first_col)/2)<<endl;

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