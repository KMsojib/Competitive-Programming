#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if(n%4 ==  0)
        {
            cout<<"Even"<<endl;
        }
        else if(n%2 == 1)
        {
            cout<<"Odd"<<endl;
        }
        else
        {
            cout<<"Same"<<endl;
        }
    }
    return 0;
}