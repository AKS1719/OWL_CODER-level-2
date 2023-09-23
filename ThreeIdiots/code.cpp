#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        if((a+b+c==0) or (a+b-c==0) or (a-b+c==0) or (a-b-c==0))
        {
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;
    }
}
