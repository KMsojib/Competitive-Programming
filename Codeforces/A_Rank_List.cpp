#include<bits/stdc++.h>
using namespace std;

bool comparator(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first != b.first) {
        return a.first > b.first; 
    }
    return a.second < b.second;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(),comparator);
    int cnt = 0, target = a[k-1].first;
    for(int i=0;i<n;i++){
        if(a[i].first == target && a[i].second == a[k-1].second){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}