#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int n;
        cin>>n;
        std::vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        std::vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int totalSum = 0;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            totalSum += max(a[i],b[i]);
        }
        for(int i=0;i<n;i++){
            int crn = totalSum + min(a[i],b[i]);
            maxi = max(maxi,crn);
        }
        cout<<maxi<<endl;
    }

    return 0;
}
