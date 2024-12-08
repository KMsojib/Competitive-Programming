#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    for(int i=0;i<t;i++){
        string s;   cin>>s;
        int a = 0, b = 0;
        for(auto ch : s){
            if(ch == 'a') a++;
            else b++;
        }

        if(a == b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}