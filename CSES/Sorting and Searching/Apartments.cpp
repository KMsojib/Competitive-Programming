#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    long long n,m,k;    cin>>n>>m>>k;
    vector<long long>v(n);
    vector<long long>s(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    int ans=0;
    int i=0,j=0;
    while (i<n && j<m)
    {
        /* code */
        if(abs(v[i]-s[j])<=k)
        {
            i++;
            j++;
            ans++;
            //cout<<"IF part: "<<i<<" "<<j<<" "<<ans<<endl;
            
        }
        else if(v[i]-s[j]>k){
            //cout<<"else if part: "<<v[i]-s[j]<<" "<<j<<endl;
            j++;      
        }
        else{
            //cout<<"else part: "<<i<<endl;
            i++;
        }
 
    }
    
    cout<<ans<<endl;
    return 0;
}