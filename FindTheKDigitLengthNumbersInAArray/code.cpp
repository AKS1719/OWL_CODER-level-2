#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,c=0;
    cin >> n>>k;
    for(int i = 0 ; i < n;i++)
    {
        int a;
        cin >> a;
        if(a<0)a*=-1;
        string s=to_string(a);
        if(s.size()==k)c++;
    }
    cout<<c;
}
