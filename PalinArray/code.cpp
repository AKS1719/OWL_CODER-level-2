#include<bits/stdc++.h>

using namespace std;

int rev(int n)
{
    int t =0;
    if (n<0){n*=-1;t = 1;}
    int r =0;
    while(n>0)
    {
        r = r*10 + n%10;
        n/=10;
    }
    if(t==1)r*=-1;
    return r;
}

int main()
{
    int n;
    cin >> n;
    int f = 1;
    for(int i = 0 ; i< n ;i++)
    {
        int a;
        cin >> a;
        int r = rev(a);
        if(r!=a){
            f=0;break;
        }
    }
    cout<<f;
}
