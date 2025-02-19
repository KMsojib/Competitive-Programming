/* 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve(){
    string s;   cin>>s;
    ll cn_0 = 0;
    for(auto x : s){
        if(x == '0'){
            cn_0++;
        }
    }
    if(s.size()-cn_0 == 1){
        cout<<-1<<endl;
    }
    else{
        if(s.size() == 2){
            if(s[0] < s[1]){
                cout<<s[0] << " " <<s[1]<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
        }
        else if(cn_0==0){
            cout<<s[0]<<" ";
            for(int i=1;i<s.size();i++){
                cout<<s[i];
            }
            cout<<endl;
        }
        else{
            string x="";
            x+=s[0];
            int f=-1;
            for(int i=1;i<s.size();i++){
                if(s[i]!='0'){
                    f=i;
                    break;
                }
                else{
                    x+=s[i];
                }
            }
            string y="";
            for(int i=f;i<s.size();i++){
                y+=s[i];
            }
            ll a = stoi(x),b = stoi(y);
            if(a<b){
                cout<<a<<" "<<b<<endl;
            }
            else{
                cout<<-1<<endl;
            }
            
        }
    }
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}


         Optimal code        */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cn=1;
        while (cn < s.size() && s[cn] == '0'){
            cn++;
        }
        if(cn == s.size()){
            cout<<-1<<endl;
            continue;
        }
        int x = stoi(s.substr(0,cn)) , y = stoi(s.substr(cn,s.size()-cn));
        if(x>=y){
            cout<<-1<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }

    return 0;
}
