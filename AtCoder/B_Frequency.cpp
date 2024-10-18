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
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        char max = NULL;
        int sum=-1;
        for(auto x: mp){
            if(x.second > sum){
                max = x.first;
                sum=x.second;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}
