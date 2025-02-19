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
        set<int>st;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }

        if(st.size() == 1){
            cout<<-1<<endl;
        }
        else{
            map<int,int>mp;
            for(int i=0;i<n;i++){
                mp[a[i]]++;
            }

            int cn = 0,ans = n;
            for(int i=0;i<n;i++){
                if(a[i]==a[0]){
                    cn++;
                }
                else{
                    ans = min(ans,cn);
                    cn=0;
                }
            }
            ans = min(ans,cn);
            cout<<ans<<endl;
        }

    }

    return 0;
}
