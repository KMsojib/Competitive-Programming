#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        
        cout << nouppercase << 
        showbase << hex << (long long)a << endl;
        
        cout << setw(15) << setfill('_') << showpos << fixed <<
        setprecision(2) << b << endl;
        
        cout << noshowpos << uppercase << scientific << 
        setprecision(9) << c << endl;
    }
    return 0;
}
