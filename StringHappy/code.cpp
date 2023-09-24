#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char k;
    string s;
    cin >> s >> k >> n;
    for(char ch:s )
    {
        if(ch==k)n--;
    }
    cout<<(int)(n<=0);
}
