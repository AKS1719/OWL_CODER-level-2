#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b and b==c and a==c)
    {
        cout<<"Equilateral triangle";
    }
    else if(a == b or a == c or b == c)
    {
        cout<<"Isosceles triangle";
    }
    else{
        cout<<"Scalene triangle";
    }
}
