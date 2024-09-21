#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int arr[1000000+1];
void solve()
{
    int n,k;    cin>>n>>k;
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    int x = 1;
    while(x<k){
        x += arr[x];
    }
    cout<<(x==k ? "YES" : "NO")<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;  ///cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

