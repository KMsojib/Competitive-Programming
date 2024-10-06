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
        int n = (int)s.size();
        for(int i=0;i<n;i++){
            if(i == n-1){
                s += (s[n-1] == 'a' ? "b" : "a");
            }
            if (s[i] == s[i + 1]) {
				if (s[i] == 'a') {
					s = s.substr(0, i + 1) + "b" + s.substr(i + 1, n - i - 1);
					break;
				}
				else {
					s = s.substr(0, i + 1) + "a" + s.substr(i + 1, n - i - 1);
					break;
				}
			}
        }
        cout<<s<<endl;
    }

    return 0;
}

