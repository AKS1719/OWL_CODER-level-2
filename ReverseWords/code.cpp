#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    vector<string> words;
    string ns="";
    for(int i = 0 ; i < s.size() ;i++)
    {
        if(s[i]==' ')
        {
            if(ns.size()!=0)
            words.push_back(ns);
            ns="";
        }
        else {
            ns.push_back(s[i]);
        }
    }
    words.push_back(ns);
    for(int i = words.size()-1 ; i >=0 ;i--)
    {
        cout<<words[i]<<" ";
    }
}
