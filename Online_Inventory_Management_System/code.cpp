#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int res = -1;
    for(int i = 0 ; i < n ;i++)
    {
        int a;
        cin >> a;
        if(a==m)
        {
            res = 1;
            break;
        }
    }
    cout<<res;
}
