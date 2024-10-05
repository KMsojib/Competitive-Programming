#include<iostream>
using namespace std;
int main()
{
    long long int cnt=1,maxx=1,i;
    string s;
    cin>>s;
    long long int len=s.size();
    for(i=1; i<len; i++)
    {
        if(s[i]==s[i-1])
        {
            cnt=cnt+1;
        }
        else
        {
            cnt=1;
        }
        maxx=max(maxx,cnt);
    }
    cout<<maxx;
    return 0;
}