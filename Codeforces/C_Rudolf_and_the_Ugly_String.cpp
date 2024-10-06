/*----------------------------------------MY Aproach---------------------------------------------*/

// Time compelxity: O(n)
// Space complexity: O(1)
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
        int cn=0;
        for(int i=0;i<n-2;i++){
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' || s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
                cn++;
                i+=2;
            }    
        }

        cout<<cn<<endl;
    }

    return 0;
}
/*------------------------------------------------Youtub Solution--------------------------------------------------*/
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
        int cn=0,i=0;
        while(i<n){
            if(i<=n-5 && s.substr(i,5)=="mapie"){
                cn++;
                i+=5;
            }
            else if(s.substr(i,3)=="map" || s.substr(i,3)=="pie"){
                cn++;
                i+=3;
            }
            else{
                i++;
            }
        }
        cout<<cn<<"\n";
    }

    return 0;
}
