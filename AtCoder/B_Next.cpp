#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n;  cin>>n;
        set<int>st;
        for(int i=0;i<n;i++){
            int x;  cin>>x;
            st.insert(x);
        }
        int sz=st.size()-2;
        auto it = next(st.begin(),sz);
        cout<<*it<<endl;
    }

    return 0;
}
