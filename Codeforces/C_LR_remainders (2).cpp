// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

// ll modulus_val(ll m, deque<ll>dek)
// {
//     ll ans=1;
//     for(ll val : dek){
//         ans*=val;
//     }
//     return ans%m;
// }

// int main()
// {
//     fast_io;
//     int t;  cin>>t;
//     while(t--){
//         deque<ll>dq;
//         ll n,mod;   cin>>n>>mod;
//         for(int i=0;i<n;i++){
//             ll x;   cin>>x;
//             dq.push_back(x);
//         }

//         string s;   cin>>s;
//         vector<ll>ans;
//         // ans.push_back(modulus_val(mod,dq));
//         cout<<modulus_val(mod,dq)<<" ";
//         int i=0;
//         while (!dq.empty() && i<s.size())
//         {
//             if(s[i]=='L'){
//                 dq.pop_front();
//                 i++;
//                 //ans.push_back(modulus_val(mod,dq));
//                 cout<<modulus_val(mod,dq)<<" ";
//             }
//             else{
//                 dq.pop_back();
//                 i++;
//                 //ans.push_back(modulus_val(mod,dq));
//                 cout<<modulus_val(mod,dq)<<" ";
//             }
//         }
        
//         // for(int i=0;i<ans.size()-1;i++){
//         //     cout<<ans[i]<<" ";
//         // }
//         cout<<endl;
//         dq.clear();
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

ll n,m;
ll a[200005],ans[200005];
string s;
 
ll rec(ll l,ll r,ll i){
	if(l==r)
		return ans[i]=a[l]%m;
	if(s[i]=='L')
		return ans[i]=(rec(l+1,r,i+1)*a[l])%m;
	return ans[i]=(rec(l,r-1,i+1)*a[r])%m;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>s;
        rec(0,n-1,0);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}
