
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
        ll n;   cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b,b+n);
        map<ll,ll>mp;
        for(int i=0;i<n;++i){
            mp[b[i]]=i;
        }

        for(int i=0;i<n;++i){
            a[i]=mp[a[i]];
        }

        ll l=-1,r=-1;
        for(int i=0;i<n;++i){
            if(a[i]!=i){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;--i){
            if(a[i]!=i){
                r=i;
                break;
            }
        }

        if(l==-1 || r==-1){
            cout<<"yes\n";
            cout<<1<<" "<<1<<endl;
        }
        else{
            bool ok=true;
            reverse(a+l,a+r+1);
            for(int i=0;i<n;++i){
                if(a[i]!=i){
                    ok=false;
                    break;
                }
            }
            if(ok){
                cout<<"yes\n";
                cout<<l+1<<" "<<r+1<<endl;
            }else{
                cout<<"no\n";
            }
        }

    return 0;
}
