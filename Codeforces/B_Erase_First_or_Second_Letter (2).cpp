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
        string s;   cin>>s;
        set<char>st;
        int cn=0;
        for(auto it : s){
            st.insert(it);
            cn+=st.size();
        }

        cout<<cn<<endl;
    }

    return 0;
}
