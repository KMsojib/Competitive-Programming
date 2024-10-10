#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        int ans = 0, i = 0, n = (int)s.size();
        bool f = false;
        while(i<n){
            if(s[i] =='0'){
                ans++;
                while(i<n && s[i] == '0'){
                    i++;
                }
                if(i!=n){
                    if(s[i] == '1'){
                        f = true;
                    }
                }
            }
            else{
                ans++;
                while(i<n && s[i] == '1'){
                    i++;
                }
            }
        }
        cout<<(f == true ? ans-1 : ans)<<endl;

    }

    return 0;
}
