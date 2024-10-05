#include<bits/stdc++.h>
using namespace std;
 
set<string>solve(string s)
{
    int n = s.size();
    sort(s.begin(),s.end());
    set<string>unique_str;
    do{
        unique_str.insert(s);
    }while(next_permutation(s.begin(),s.end()));
    return unique_str;
}
 
int main()
{
    string s;   cin>>s;
    set<string>uniqueString = solve(s);
    cout<<uniqueString.size()<<endl;
    for(auto x : uniqueString){
        cout<<x<<" "<<endl;
    }
}