#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int res=-1;
    unordered_map<int,int> mp;
    for(int i = 0 ; i < n ;i++)
    {
        int a;
        cin >> a;
        mp[a]++;
        if(mp[a]==k)
        {
            res=a;
            break;
        }
    }
    cout<<res;
}
