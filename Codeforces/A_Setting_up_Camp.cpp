#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c; 
        cin>>a>>b>>c;
        int x=b%3;
        if(x+c>=3 || x==0){
            long long temp = a;
            temp+=ceil(1.0*(b+c)/3);
            cout<<temp<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}
