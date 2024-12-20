#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<long long>ans(n,0);
        for(int i=0;i<m;i++){
            long long s,idx;
            cin>>s>>idx;
            ans[idx-1]+=s;
        }
        for(int i=0;i<n;i++){
            if (i > 0) cout << " ";
            cout<<ans[i];
        }
        cout<<endl;
    }

    return 0;
}