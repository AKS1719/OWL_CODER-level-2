#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i < n;i++)
        {
            cin >> v[i];
        }
        int lsum =0,rsum =0;
        int l = 0 , r = n-1;
        int res = -1;
        while(l<=r)
        {
            if(l==r)
            {
                if(lsum==rsum)res=l;
                break;
            }
            else if(l==0 and r==n-1)
            {
                lsum+=v[l++];
                rsum+=v[r--];
            }
            else if(lsum<=rsum)
            {
                lsum+=v[l++];
            }
            else if(rsum<=lsum)
            {
                rsum+=v[r--];
            }
        }
        cout<<res<<endl;
    }
}
