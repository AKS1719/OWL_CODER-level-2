#include<bits/stdc++.h>

using namespace std;

bool inRange(char ch)
{
    if(ch>='a' and ch<='z')return true;
    if(ch>='A' and ch<='Z')return true;
    return false;
}

int main()
{
    string s;
    cin >>s;
    int l = 0 , r=s.size()-1;
    while(l<r)
    {
        if(inRange(s[l]) and inRange(s[r]))
        {
            swap(s[l++],s[r--]);
        }
        else{
            if(!inRange(s[l]))l++;
            if(!inRange(s[r]))r--;
        }
    }
    cout<<s;
    
}
