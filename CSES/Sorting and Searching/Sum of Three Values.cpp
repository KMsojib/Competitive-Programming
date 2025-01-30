#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n,x;     cin>>n>>x;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            int x;  cin>>x;
            vp.push_back({x,i+1});
        }
        bool f = false;
        //sort(vp.begin(),vp.end());
        sort(begin(vp),end(vp));
        for(int i=0;i<n;i++){
            int l = 0, r = n-1;
            int target = x - vp.at(i).first;
            while(l != r){
                if(l != i && r != i && vp.at(l).first + vp.at(r).first == target){
                    cout<<vp.at(i).second <<" "<<vp.at(l).second <<" "<<vp.at(r).second <<endl;
                    f = true;
                    break;
                }
                else if(vp.at(l).first + vp.at(r).first < target){
                    l++;
                }
                else{
                    r--;
                }
            }
            if(f){
                break;
            }
        }
        if(!f){
            cout<<"IMPOSSIBLE\n";
        }
    }
 
    return 0;
}