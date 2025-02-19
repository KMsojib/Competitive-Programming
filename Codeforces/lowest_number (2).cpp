#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            int x;  cin>>x;
            vp.push_back({x,i+1});
        }

        sort(vp.begin(),vp.end());
        cout<<vp[0].first<<" "<<vp[0].second<<endl;
    }

    return 0;
}
