#include<bits/stdc++.h>

using namespace std;

void rev(string s,int i)
{
    if(i==s.size()){
        return;
    }
    rev(s,i+1);
    cout<<s[i];
}

int main()
{
    string s;
    getline(cin,s);
    rev(s,0);
}
