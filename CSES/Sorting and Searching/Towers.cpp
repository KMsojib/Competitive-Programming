#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
 
bool all_equal(vector<int>v){
    return equal(v.begin() + 1, v.end(), v.begin());
}
 
int main()
{
    fast_io;
    int n;
    cin >> n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        auto it = upper_bound(a.begin(),a.end(),x);
        if(it==a.end()){
            a.push_back(x);
        }
        else{
            *it=x;
        }
    }
    cout<<a.size()<<endl;
    
    return 0;
}
