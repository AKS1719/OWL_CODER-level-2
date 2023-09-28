#include<bits/stdc++.h>

using namespace std;


int main()
{
    double basic;
    cin >> basic;
    double da,hra;
    if(basic<=10000)
    {
        da = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic<=20000)
    {
        da = basic * 0.9;
        hra = basic * 0.25;
    }
    else if(basic>20000)
    {
        da = basic * 0.95;
        hra = basic * 0.3;
    }
    cout<<fixed<<setprecision(2)<<(basic+da+hra);
}
