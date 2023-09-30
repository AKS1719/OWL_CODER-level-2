#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long total =0;
    vector<long long > res (n +1,1);
    for(int i =2 ; i <= n ;i++)
    {
        for(int j = i ;j <=n ;j+=i)
        {
            res[j]+=i;
        }
    }
    cout<<accumulate(res.begin(),res.end(),0ll)-1;
}
