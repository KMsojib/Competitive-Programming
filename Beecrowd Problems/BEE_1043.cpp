/*Unsolved:

problem link:https://www.beecrowd.com.br/judge/en/problems/view/1043
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b<c || a+c<b || b+c<a){
        double peri=a+b+c;
        cout<<"Perimetro = "<<peri<<endl;
    }
    else{
        double area=(a+b/2)*c;
        cout<<"Area = "<<area<<endl;
    }
    return 0;
}