#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    set<int> s;
    for(int i = 0 ; i < n ;i++)
    {
        int a;
        cin >>a;
        s.insert(a);
    }
    for(int i = 0 ; i < m ;i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    for(auto &x : s)cout<<x<<" ";
}
