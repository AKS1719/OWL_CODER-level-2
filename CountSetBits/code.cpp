#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        cout<<__builtin_popcount(a);
        cout<<endl;
    }
}
