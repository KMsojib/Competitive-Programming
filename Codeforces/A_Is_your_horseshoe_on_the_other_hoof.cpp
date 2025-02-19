#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        set<int>st;
        for(int i=0;i<4;i++){
            int x;  cin>>x;
            st.insert(x);
        }
        cout<<4-st.size()<<endl;
    }

    return 0;
}
