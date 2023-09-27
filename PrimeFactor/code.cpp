#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> pf (n+1,1);
    pf[0] = pf[1] = 1;
    for(int i = 2 ; i<=n;i++)
    {
        pf[i]=i;
    }
    for(int i =2 ; i <=n;i++)
    {
        if(i==pf[i])
        {
            for(int j = i+i ;j<=n;j+=i)
            {
                pf[j]=i;
            }
        }
    }
    cout<<pf[n];
}
