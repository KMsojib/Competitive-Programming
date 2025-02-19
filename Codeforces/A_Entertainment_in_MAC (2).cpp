#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        string s;   cin>>s;
        string temp=s;
        int j=s.size();
        bool f=-1;
        for(int i=0;i<j/2;i++){
            if(s[i]>s[j-i-1]){
                f=0;
                break;
            }
            if(s[i]==s[j-i-1]){
                continue;
            }
            else{
                break;
            }
        }
        if(f==-1){
            cout<<s<<endl;
        }
        else{
            reverse(s.begin(),s.end());
            cout<<s<<temp<<endl;
        }
    }

    return 0;
}
