#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        ll x=INT_MIN,y=INT_MAX;
        map<ll,bool>mp;
        for(int i=0;i<n;i++){
            ll type,val;   cin>>type>>val;
            if(type == 1){
                x=max(x,val);
            }
            else if(type == 2){
                y=min(y,val);
            }
            else{
                mp[val]=true;
            }
        }
        //cout<<"x : "<<x<<"  Y: "<<y<<endl;
        if(x>y){
            cout<<"0\n";
        }
        else{
            ll cn=y-x+1;
            for(auto[a,b]:mp){
                if(a>=x && a<=y){
                    cn-=1;
                }
            }
            cout<<cn<<endl;
        }
    }

    return 0;
}
