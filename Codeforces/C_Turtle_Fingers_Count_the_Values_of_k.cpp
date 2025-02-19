#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<ll>divisor(ll n){
    vector<ll>div;
    for(ll i=1;i<=sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i){
                div.push_back(i);
            }
            else{
                div.push_back(i);
                div.push_back(n/i);
            }
        }    
    }
    return div;

}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll x,y,l;   cin>>x>>y>>l;
        ll cn=0;
        
        vector<ll> div = divisor(l);
        vector<ll>a,b;
        for(int i=0;i<=20;i++){
            ll res = pow(x,i);
            if(res <= 1e6){
                a.push_back(res);
            }
            else{
                break;
            }
        }

        for(int i=0;i<=20;i++){
            ll res = pow(y,i);
            if(res <= 1e6){
                b.push_back(res);
            }
            else{
                break;
            }
        }

        for(ll d=0;d<(ll)div.size();d++){
            bool f = false;
            for(ll i=0;i<(ll)a.size();i++){
                for(ll j=0;j<(ll)b.size();j++){
                    if(div[d]*a[i]*b[j] == l){
                        cn++;
                        f=true;
                        break;
                    }
                }
                if(f == true){
                    break;
                }
            }
        }
        cout<<cn<<"\n";
        
    }

    return 0;
}

/* short soution for it : 

https://codeforces.com/contest/1933/status/C

*/