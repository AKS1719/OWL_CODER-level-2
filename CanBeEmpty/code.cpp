#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--){
        unordered_map<char,int> mp;
        string s;
        cin >>s;
        for(char ch :s)
        {
            mp[ch]++;
        }
        if(mp['C']==0 and mp['A']==mp['B'])cout<<"YES"<<endl;
        else if(mp['A']>=mp['B'] )cout<<"NO"<<endl;
        else if(mp['B']-mp['A']==mp['C'])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
