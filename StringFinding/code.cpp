#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string k;
    cin >> k;
    //cout<<s<<" "<<k;
    int j=0;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]==k[j])
        {
            j++;
        }
        else if(j==k.size())break;
        else if(j!=0)
        {
            j=0;
        }
    }
    if(j==k.size())cout<<1;
    else cout<<0;
}
