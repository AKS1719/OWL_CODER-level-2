#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 65 ;i < 65+n ;i++)
    {
        for(int j = 65 ; j<= i ;j++)
        {
            cout << (char)j;
        }
        cout<<endl;
    }
}
