#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n;    cin>>n;
    set<long long>st;
    for(int i=0;i<n;i++)
    {
        long long a;    cin>>a;
        st.insert(a);
    }
    cout<<st.size()<<endl;
    return 0;
}