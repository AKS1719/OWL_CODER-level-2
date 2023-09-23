#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    for(int i = 0 ; i < s.size()-1;i++)
    {
        if(s[i]>='0' and s[i]<='9' and s[i+1]>='0' and s[i+1]<='9')
        {
            swap(s[i],s[i+1]);
        }
    }
    cout<<s;
}
