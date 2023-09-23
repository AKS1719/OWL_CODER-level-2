#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(),r.end());
    if(r==s)cout<<"YES";
    else cout<<"NO";
}
