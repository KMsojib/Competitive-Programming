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
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            b[i][j] = 1;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 0){
                for(int k=0;k<n;k++){
                    b[k][j] = 0;
                }
                for(int p=0;p<m;p++){
                    b[i][p] = 0;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int d = 0;
            for(int k=0;k<n;k++){
                d|=b[k][j];
            }
            for(int p=0;p<m;p++){
                d|=b[i][p];
            }

            if(d!=a[i][j]){
                cout<<"NO"<<nline;
                return;
            }
        }
    }
    cout<<"YES"<<nline;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<nline;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test_case=1;  //cin>>test_case;
    while(test_case--){
        solve();
    }
    return 0;
}
