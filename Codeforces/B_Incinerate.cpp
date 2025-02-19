#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        vector<ll>h(n),p(n);

        in_range(0,n){
            cin>>h[i];
        }

        in_range(0,n){
            cin>>p[i];
        }

        multiset<ll>power;
        for(int i=0;i<n;i++){
            power.insert(p[i]);
        }

        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>reduce;
        for(int i=0;i<n;i++){
            reduce.push({h[i],i});
        }
        bool ok=false;
        ll total_reduce=0;
        while(k>0){
            total_reduce+=k;
            while(!reduce.empty()){
                ll cur_rmv=reduce.top().first-total_reduce;
                ll cur_idx=reduce.top().second;

                if(cur_rmv<1){
                    reduce.pop();
                    power.erase(power.find(p[cur_idx]));
                }
                else{
                    break;
                }
            }
            if(reduce.empty()){
                ok=true;
                break;
            }
            ll re_ass=*power.begin();
            k-=re_ass;
        }
        if(ok){
            YES;
        }else{
            NO;
        }
    }

    return 0;
}

/*
Observation:
1. least power are weakest
2. health <= 0 then monster are die.

Aproach:

given health & power
take example:
6 7
h: 18 5 13 9 10 1
p: 2 7 2 1 2 6

store the power in multiset
power: index
    1(4) 2(1) 2(3) 2(5) 6(6) 7(2)

sotore the health in priority queue:
health: index
    1(6) 5(2) 9(4) 10(5) 13(3)18(1)

    totalReduce=0;
    while(6>0)

*/