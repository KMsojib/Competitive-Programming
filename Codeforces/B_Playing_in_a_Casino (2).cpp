//https://codeforces.com/problemset/problem/1808/B
// tutorial : https://www.youtube.com/watch?v=SsEIlkCkoIY

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n,m;    cin>>n>>m;
        vector<ll>vp[m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                ll x;  cin>>x;
                vp[j].push_back(x);
            }
        }

        for(int i=0;i<m;i++){
            sort(vp[i].begin(),vp[i].end());
        }

        ll ans = 0;
        for(int i=0;i<m;i++){
            vector<ll>suff(n,0);
            suff[n-1] = vp[i][n-1];
            for(int j=n-2;j>=0;j--){
                suff[j] = suff[j+1] + vp[i][j];
            }

            for(int j=0;j<n-1;j++){
                ll temp = suff[j+1] - (n-1-j)*vp[i][j];
                ans+=temp;
            }
        }
        cout<<ans<<endl;
        
    }

    return 0;
}
