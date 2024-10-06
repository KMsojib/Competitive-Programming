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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>sorted_array;
        for(int i=0;i<n;i++){
            if(a[i]>=10){
                sorted_array.push_back(a[i]/10);
                sorted_array.push_back(a[i]%10);
            }
            else{
               sorted_array.push_back(a[i]);
            }
        }
        if(is_sorted(sorted_array.begin(),sorted_array.end())){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

    return 0;
}
