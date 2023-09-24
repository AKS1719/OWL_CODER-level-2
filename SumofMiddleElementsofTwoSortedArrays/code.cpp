#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n*2);
    for(int i = 0; i < n*2;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[n]+v[n-1];
}
