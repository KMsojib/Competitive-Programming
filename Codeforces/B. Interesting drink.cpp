#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nline '\n'
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int ans = 0;
        int l = 0, r = n-1;
        while(l<=r)
        {
            int mid = l + (r-l) / 2;
            if(a[mid] <= x)
            {
                ans = mid+1;
                l = mid+1;
            }
            else if(a[mid]>x){
                r = mid-1;
            }
            else{
                l = mid + 1;
            }
        }
        cout<<ans<<nline;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1; //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
