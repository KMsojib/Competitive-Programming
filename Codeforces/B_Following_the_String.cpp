#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    ll n;   cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string s="abcdefghijklmnopqrstuvwxyz";
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]=0;
    }

    string ans="";
    for(int i=0;i<n;i++){
        for(auto [x,y] : mp){
            if(y == a[i]){
                ans+=x;
                mp[x]++;
                break;
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
