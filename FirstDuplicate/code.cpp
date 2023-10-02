#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int,int> mp;
    int res=-1;
    while(n--)
    {
        int a;
        cin >> a;
        mp[a]++;
        if(mp[a]>1){res=a;break;}
    }
    cout<<res;
}
