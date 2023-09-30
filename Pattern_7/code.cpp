#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(char i = 'A' ; i< 'A'+n ;i++)
    {
        for(char j = 'A' ; j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
