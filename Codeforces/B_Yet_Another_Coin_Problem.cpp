// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

// int coins[]={1,3,6,10,15};
// ll dp[100000000];

// ll coin(ll n,ll m){
//     for(ll i=0;i<=n;i++){
//         dp[i]=INT_MAX;
//     }

//     dp[0]=0;
//     for(ll i=1;i<=n;i++){
//         for(int j=0;j<5;j++){
//             if(coins[i]<=i){
//                 dp[i]=min(dp[i], 1 + dp[i - coins[j]]);  
//             }
//         }
//     }
//     return dp[n];
// }

// int main()
// {
//     fast_io;
//     int t;  cin>>t;
//     while(t--){
//         ll n;   cin>>n;
//         ll res = coin(n,5);
//         cout<<res<<"\n";
//     }

//     return 0;
// }

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
        map<ll,ll>mp;
        mp[0]=0;mp[1]=1;mp[2]=2;mp[3]=1;mp[4]=2;mp[5]=3;mp[6]=1;mp[7]=2;
        mp[8]=3;mp[9]=2;mp[10]=1;mp[11]=2;mp[12]=2;mp[13]=2;mp[14]=3;
        ll fifteen=n/15;
        n%=15;
        if(fifteen==0){
            cout<<mp[n]<<"\n";
        }
        else{
            ll ans=(fifteen+mp[n]);
            if(n>=5)
                ans=min((fifteen+mp[n]),(fifteen+1+mp[n-5]));
            cout<<ans<<"\n";
        }
    }

    return 0;
}
