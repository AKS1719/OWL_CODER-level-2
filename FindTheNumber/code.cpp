#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = INT_MAX;
    for(int i = 0 ; i < n ;i++)
    {
        int a;
        cin >> a;
        if(m>a)m=a;
    }
    cout<<m;
}
