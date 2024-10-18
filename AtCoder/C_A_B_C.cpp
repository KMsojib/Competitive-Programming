// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
// int main()
// {
//     fast_io;
//     int t=1;  //cin>>t;
//     while(t--){
//         ll n;   cin>>n;
//         vector<ll>a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         ll m;   cin>>m;
//         vector<ll>b(m);
//         for(int i=0;i<m;i++){
//             cin>>b[i];
//         }
//         ll l;   cin>>l;
//         vector<ll>c(l);
//         for(int i=0;i<l;i++){
//             cin>>c[i];
//         }

//         int q;  cin>>q;
//         vector<ll>d(q);
//         for(int i=0;i<q;i++){
//             cin>>d[i];
//         }
//         set<ll>st;
//         for(auto &x : a){
//             for(auto &y : b){
//                 for(auto &z : c){
//                     st.insert(x+y+z);
//                 }
//             }
//         }
//         for(auto &i : d){
//             if(st.count(i)){
//                 cout<<"Yes\n";
//             }
//             else{
//                 cout<<"No\n";
//             }
//         }
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        ll n;   cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll m;   cin>>m;
        vector<ll>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        ll l;   cin>>l;
        vector<ll>c(l);
        for(int i=0;i<l;i++){
            cin>>c[i];
        }

        int q;  cin>>q;
        vector<ll>d(q);
        for(int i=0;i<q;i++){
            cin>>d[i];
        }
        ll mini = a[0]+b[0]+c[0];
        ll maxi = a[n-1]+b[m-1]+c[l-1];
        for(int i=0;i<q;i++){
            if(d[i]>=mini && d[i]<=maxi){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }

    return 0;
}
