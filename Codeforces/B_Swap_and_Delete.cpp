#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        int cn[2]={0,0};
        int ans=0;
        for(int i=0;i<s.size();i++){
            cn[s[i]-'0']++;
        }
        
        for(int i=0;i<s.size();i++){
            if(cn[!(s[i]-'0')]>0){ // ! denote when 1 come then it 0 
                                    // when 0 come then it 1
                cn[!(s[i]-'0')]--;
            }
            else{
                ans=s.size()-i;
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
