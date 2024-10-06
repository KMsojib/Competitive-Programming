#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string str="abcdefghijklmnopqrstuvwxyz";
        string s ="";
        for(int i=0;i<y;i++){
            s.push_back(str[i]);
        }

        for(int i=0;i<x;i++){
            cout<<s;
        }
        cout<<"\n";
    }

    return 0;
}
