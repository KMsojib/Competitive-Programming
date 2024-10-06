#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        string s;   cin>>s;
        map<char,int>MP;
        set<char>st;
        for(auto ch : s){
            MP[ch]++;
            st.insert(ch);
        }

        bool f = true;
        for(auto x : st){
            int cn=0;
            char ch = x;
            cn+=MP[x];
            for(auto it : MP){
                if(it.first != ch && MP[x]==it.second){
                    cn+=it.second;
                    MP[x]=0;
                    MP[it.first]=0;
                }
            }
            if(cn%2){
                f=false;
                break;
            }
            else{
                cn=0;
            }
        }

        if(f){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

    }

    return 0;
}
