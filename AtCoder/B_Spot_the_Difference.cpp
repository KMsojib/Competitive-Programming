#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n;  cin>>n;
        char A[n][n],B[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>A[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>B[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(A[i][j]!=B[i][j]){
                    cout<<i+1<<" "<<j+1<<endl;
                    return 0;
                }
            }
        }   
    }

    return 0;
}
