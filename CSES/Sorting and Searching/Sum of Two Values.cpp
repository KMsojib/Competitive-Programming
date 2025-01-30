#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,x;
    cin>>n>>x;
 
    vector<pair<long long, long long>>a;
    long long temp=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back({temp,i});
    }
    sort(a.begin(),a.end());
 
    long long i=0,j=n-1;
    bool flag=false;
    while(j>i)
    {
        temp=a[i].first+a[j].first;
        if(temp==x){
            cout<<a[i].second+1<<" "<<a[j].second+1<<endl;
            flag=true;
            return 0;
        }
        else if(temp<x){
            i++;
        }
        else{
            j--;
        }
    }
    if(flag){
 
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}