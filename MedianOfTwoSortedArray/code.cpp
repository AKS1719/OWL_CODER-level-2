#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    for(int i = 0 ; i < m ;i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(v.size() % 2==0)cout<<(v[v.size()/2 -1 ] + v[v.size()/2 ])/2.0;
    else cout<<v[(n+m)/2];
}
