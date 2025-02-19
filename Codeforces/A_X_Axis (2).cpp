// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// int main()
// {
//     fast_io;
//     int t;  cin>>t;
//     while(t--){
//         vector<int>a(3);
//         cin>>a[0]>>a[1]>>a[2];
//         sort(a.begin(),a.end());
//         int sum =abs(a[0]-a[1]) + abs(a[1]-a[2]);
//         cout<<sum<<endl;
//     }

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;  cin>>a>>b>>c;
    cout<<max({a,b,c})-min({a,b,c})<<endl;
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
 