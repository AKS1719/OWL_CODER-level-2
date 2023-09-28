#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int,int> matches_won;
    unordered_map<int, int > matches_lost;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ;i++)
    {
        int a,b;
        cin >> a >> b;
        matches_won[a]++;
        matches_lost[b]++;
    }
    vector<int> won;
    vector<int> lost;
    for(auto &x: matches_won){
        if(matches_lost[x.first]==0)won.push_back(x.first);
    }
    for(auto &x : matches_lost)
    {
        if(x.second==1)lost.push_back(x.first);
    }
    sort(won.begin(),won.end());
    sort(lost.begin(),lost.end());
    for(int i = 0 ; i < won.size() ;i++)
    {
        if(i==won.size()-1)cout<<won[i]<<endl;
        else cout<<won[i]<<" ";
    }
    for(int x : lost)
    {
        cout<<x <<" ";
    }
}
