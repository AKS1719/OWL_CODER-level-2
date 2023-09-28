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
        int arr[n];
        for(int i = 0 ; i < n ;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int sm =0;
        int cnt=0;
        for(int i = 0 ; i < n;i++)
        {
            if(arr[i]>=sm)
            {
                cnt++;
                sm+=arr[i];
            }
        }
        cout<<cnt;
    }
}
