#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char,int> mp;
    for(char ch : s)
    {
        mp[ch]++;
    }
    //sort(mp.begin(),mp.end());
    for(auto &i : mp)
    {
        if(i.second>1)
        {
            cout<<i.first<<"-"<<i.second<<" ";
        }
    }
}
