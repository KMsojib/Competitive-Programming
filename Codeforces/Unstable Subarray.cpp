#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                mp[i].push_back({a[j]});
            }
        }
        for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first<< '\t' << itr->second << '\n';
        }

    }

    return 0;
}
