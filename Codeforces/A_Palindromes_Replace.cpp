#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

bool is_pal(string s){
    string r=s;
    reverse(s.begin(),s.end());
    if(s==r){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    fast_io;

    string s;
    cin>>s;
    
    //lexicographically smallest one
    if(s[0]=='?' && s[s.size()-1]!='?'){
        s[0]=s[s.size()-1];
    }
    if(s[0]!='?' && s[s.size()-1]=='?'){
        s[s.size()-1]=s[0];
    }

    int idx=-1;
    for(int i=1;i<s.size()-2;i++){
        if(s[i]!='?'){
            idx=i;
        }
    }
    for(int i=1;i<=s.size()-2;i++){
        s[i]=s[idx];
    }

    bool pal=is_pal(s);
    if(pal){
        cout<<s<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}
