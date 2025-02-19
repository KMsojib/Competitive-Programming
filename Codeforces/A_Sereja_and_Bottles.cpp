
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int n;  cin>>n;
    vector<int>a(n),b(n);
    map<int,int>mp;
    int cn=0;
    for(int i=0;i<n;++i){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;++i){
        mp[b[i]]++;
    }
    for(int i=0;i<n;++i){
        mp[b[i]]--;
        if(mp[a[i]] == 0){
            cn++;
        }
        mp[b[i]]++;
    }
    cout<<cn<<endl;
    return 0;
}
