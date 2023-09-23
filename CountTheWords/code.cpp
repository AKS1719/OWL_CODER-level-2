#include<bits/stdc++.h>

using namespace std;

bool checkVowel(char ch)
{
    if(ch=='A' or ch=='a' or ch=='e' or ch=='E' or ch=='I' or ch=='i' or ch=='o' or ch=='O' or ch=='u' or ch=='U')return true;
    return false;
}

int main()
{
    vector<string> s;
    string t;
    getline(cin,t);
    string ns="";
    for(int i = 0 ; i < t.size();i++)
    {
        if(t[i]==' ')
        {
            s.push_back(ns);
            ns="";
        }
        else ns.push_back(t[i]);
    }
    s.push_back(ns);
    int cnt=0;
    for(string x : s)
    {
        if(checkVowel(x[0]) and !checkVowel(x[x.size()-1]))cnt++;
    }
    cout<<cnt;
}
