#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    int res = -1;
    for(int i = 0 ; i < n ;i++)
    {
        int a;
        cin >> a;
        if(a==t)
        {
            res=i;
            break;
        }
    }
    cout<<res;

}
