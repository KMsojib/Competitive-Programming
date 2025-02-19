#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int t=1;  //cin>>t;
    while(t--){
        int n,q;    cin>>n>>q;
        string s;   cin>>s;
        while(q--)
        {
            string x;   cin>>x;
            if(x=="substr"){
                int l,r;    cin>>l,r;
                if(l>r)     swap(l,r);
                string a = s.substr(l-1,(r-1)+1);
                cout<<a<<endl;
            }
            else if(x=="sort"){
                int l,r;    cin>>l,r;
                if(l>r)     swap(l,r);
                sort(s.begin()+l-1,s.end()+r);
            }
            else if(x=="pop_back"){
                s.pop_back();
            }
            else if(x=="back"){
                cout<<s.back()<<endl;
            }
            else if(x == "reverse"){
                int l,r;    cin>>l,r;
                if(l>r) swap(l,r);
                reverse(s.begin()+l-1,s.end()+r);
            }
            else if(x == "front"){
                cout<<s.front()<<endl;
            }
            else if(x == "push_back"){
                char ch; cin>>ch;
                s.push_back(ch);
            }
            else {
                int l;  cin>>l;
                cout<<s[l-1]<<endl;
            }

        }
    }

    return 0;
}

// wrong
