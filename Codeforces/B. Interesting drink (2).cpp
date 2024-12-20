#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
        cout<<upper_bound(a.begin(),a.end(),x) - a.begin()<<endl;
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
