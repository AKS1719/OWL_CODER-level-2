#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i = 0 ; i < n;i++)
    {
        cin >> v[i];
    }
    int l = 0 ; 
    int h = n-1;
    int res = -1;
    while(l<=h)
    {
        int m = l + (h-l)/2;
        if(v[m]==t)
        {
            res = v[m];
            break;
        }
        else if(v[m]>t)
        {
            h = m-1;
        }
        else if(v[m]<t)
        {
            l = m+1;
        }
        cout<<v[m]<<" ";
    }
    cout<<res;
}
