#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x=0;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ;i++)
    {
        int a;
        cin >> a;
        x^=a;
    }
    cout<<x;
}
