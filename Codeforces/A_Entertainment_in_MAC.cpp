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
        string rev = s;
        reverse(rev.begin(),rev.end());

        if(s<=rev){
            cout<<s<<"\n";
        }
        else{
            cout<<rev<<s<<"\n";
        }

    }

    return 0;
}
