#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<pair<int,pair<int,int>>>vp;
        int n;  cin>>n;
        for(int i=0;i<n;i++){
            int x,y;    cin>>x>>y;
            vp.push_back({x+y,{x,y}});
        }
        sort(vp.begin(),vp.end());
        for(auto it : vp){
            cout<<it.second.first<<" "<<it.second.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}