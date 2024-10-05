#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test;   cin>>test;
    while (test--)
    {
        /* code */
        long long col,row;
        cin>>row>>col;
 
        //for coloum
        if(col>row)
        {
            if(col%2==0)
            {
                col--;
                cout<<(col*col+row)<<endl;
            }
            else
            {
                cout<<(col*col-row+1)<<endl;
            }
        }
 
        else
        {
            if(row%2==0)
            {
                cout<<(row*row+1-col)<<endl;
            }
            else
            {
                row--;
                cout<<(row*row+col)<<endl;
            }
        }
 
        
    }
    
    return 0;
}