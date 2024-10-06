#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;   cin>>s;
    int n = (int)s.size();
    
    if(n == 1 || s[0]!='1' || s[n-1] == '9'){
        cout<<"NO\n";
    }
    else{
        bool f = true;
        for(int i=1;i<n-1;i++){
            if(s[i] == '0'){
                f = false;
                break;
            }
        }
        cout<<(f? "YES\n" : "NO\n");
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

/*
    Key Obsevation:
    1. The first digit should be 1
    2. The last digit shouldn't be 9
    3. The reamining (1,n-1) digit not contain 0
*/