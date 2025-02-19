#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        string x,y; cin>>x>>y;
        ll sum=stoi(x)+stoi(y);
        string temp = to_string(sum);
        string a,b,ans;
        
        for(char ch: x){
            if(ch!='0'){
                a+=ch;
            }
        }

        for(char ch: y){
            if(ch!='0'){
                b+=ch;
            }
        }

        for(char ch: temp){
            if(ch!='0'){
                ans+=ch;
            }
        }

        if(stoi(ans) == stoi(a)+stoi(b)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
