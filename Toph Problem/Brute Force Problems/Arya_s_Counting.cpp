#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<": ";
        vector<pair<int,char>>a(3);
        int x,y,z;
        cin>>x>>y>>z;
        a[0]={x,'A'}; a[1]={y,'B'}; a[2]={z,'C'};
        sort(a.begin(),a.end());
        if(a[2].first == a[1].first){
            cout<<"Confused"<<endl;
        }
        else{
            cout<<a[2].second<<endl;
        }
    }

    return 0;
}
