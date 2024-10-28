#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long int;
using lld = long double;
using ull = unsigned long long;
ll mod=1000000007;
 
 
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define nline "\n"
 
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);} // lcm
 
bool assen(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool desen(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
 
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
 
string s[1001];
int i,m,n,o[1001];
map<string,int>p,t;
int main(){
    cin>>n;
    for(;i<n;i++)cin>>s[i]>>o[i],p[s[i]]+=o[i];
    for(i=0;i<n;i++)m=max(m,p[s[i]]);
    for(i=0;p[s[i]]<m||(t[s[i]]+=o[i])<m;i++);
    cout<<s[i];
return 0;
}