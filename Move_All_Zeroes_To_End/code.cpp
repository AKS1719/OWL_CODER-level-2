#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n ;
    int cnt =0;
    for(int i = 0 ; i < n ;i++)
    {
        int a;
        cin >> a;
        if(a==0)continue;
        cout<<a<<" ";cnt++;
    }
    for(int i = cnt ;i<n ;i++)
    {
        cout<<0<<" ";
    }
}
