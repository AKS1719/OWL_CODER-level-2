#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n;i++)
    {
        int a;
        cin >> a;
        if(i==n/2 and n&1)continue;
        if(i==n/2-1 and !(n&1))continue;
        cout<<a<<" ";
    }
}
