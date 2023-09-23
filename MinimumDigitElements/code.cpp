#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cnt;
    int m =INT_MAX;
    for(int i = 0 ; i < n;i++)
    {
        string s;
        cin >> s;
        if(m>s.size())m=s.size();
        cnt.push_back(s.size());
    }
    int c=0;
    for(int x : cnt)
    {
        if(x==m)c++;
    }
   
