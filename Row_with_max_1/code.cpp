#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt =0;
    int idx =0;
    for(int i = 0 ; i < n ;i++)
    {
        int cnt1 = 0;
        for(int j = 0 ; j < n;j++)
        {
            int a;
            cin >> a;
            if(a==1)cnt1++;
        }
        if(cnt<cnt1)
        {
            idx = i;
            cnt = cnt1;
        }
    }
    cout<<idx;
}
