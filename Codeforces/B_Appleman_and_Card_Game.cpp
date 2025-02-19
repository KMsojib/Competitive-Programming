#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fast_io;
    int n,k;    cin>>n>>k;
    string s;   cin>>s;
    int a[27]={};
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    ll ans=0;
    for(int i=0; i<n; ++i){
        a[s[i]-'A']++;
    }
    sort(a,a+27);
    for(int i=26;i>=0 &&k; --i){
        if(k>=a[i]){
            k-=a[i];
            ans+=a[i]*a[i];
        }
        else{
            ans+=k*k;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
