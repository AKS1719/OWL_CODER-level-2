#include<bits/stdc++.h>

using namespace std;

bool isprime(int n)
{
    if(n==0 or n==1)return false;
    if(n==2)return true;

    for(int i= 2 ; i <= sqrt(n) ;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n ;
    int cnt=0;
    for(int i = 2 ; i*i <= n ;i++)
    {
        if(isprime(i))
        {
            cnt++;
        }
    }
    cout<<cnt;
}