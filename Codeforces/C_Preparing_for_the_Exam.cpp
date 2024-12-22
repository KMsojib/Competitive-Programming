#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m);
        for (auto &it : a){
            cin >> it;
        }
        unordered_set<int>st,tmp;
        for(int i=0;i<k;i++){
            int x;  cin>>x;
            st.insert(x);
        }
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                tmp.insert(i);
            }
        }
        string ans;
        for (int i=0;i<m;i++) {
            if (tmp.empty()||(tmp.size()==1&&tmp.count(a[i])==1)) {
                ans += '1';
            } else {
                ans += '0';
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}