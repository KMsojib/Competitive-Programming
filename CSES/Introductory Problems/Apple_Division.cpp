#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
 
void apple_division(ll i, ll n, ll s1,ll s2, ll &mini,vector<ll>&a){
    if(i==n){
        mini=min(mini,abs(s1-s2));
        return;
    }
    //add s1 
    apple_division(i+1,n,s1+a[i],s2,mini,a);
    //add s2
    apple_division(i+1,n,s1,s2+a[i],mini,a);
}
 
int main()
{
    fast_io;
    
    ll n;
    cin>>n;
    vector<ll>a(n);
    in_range(0,n){
        cin>>a[i];
    }
    ll mini = INT_MAX;
    apple_division(0,n,0,0,mini,a);
    cout<<mini<<"\n";
 
    return 0;
}
