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
            int x,y;    cin>>x>>y;
            if(x==1){
                st.insert(y);
            }
            else if(x==2){
                st.erase(y);
            }
            else{
                auto it = st.find(y);
                if(it != st.end()){
                    cout<<"Yes\n";
                }
                else{
                    cout<<"No\n";
                }
            }
        }
    }

    return 0;
}
