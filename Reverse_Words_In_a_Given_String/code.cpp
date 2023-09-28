#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >>s;
    vector<string> words;
    string ns="";
    for(int i = 0 ; i < s.size() ;i++)
    {
        if(s[i]=='.')
        {
            words.push_back(ns);
            ns="";
        }
        else {
            ns.push_back(s[i]);
        }
    }
    words.push_back(ns);
    reverse(words.begin(),words.end());
    for(int i = 0 ; i < words.size() ;i++)
    {
        if(i==words.size()-1)cout<<words[i];
        else cout<<words[i]<<".";
    }
}
