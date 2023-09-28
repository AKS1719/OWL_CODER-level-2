#include<bits/stdc++.h>

using namespace std;

int main()
{
    
        int n,m;
        cin >> n>>m;
        int arr[n][m];
        for(int i = 0 ; i < n ;i++)
        {
            for(int j = 0 ; j < m ;j++)
            {
                cin >> arr[i][j];
            }
        }
        int k ;
        cin >> k;
        int res = 0;
        for(int i = 0 ; i < n and res==0;i++)
        {
            int l = 0 , h = m-1;
            while(l<=h)
            {
                int mid = l + (h-l)/2;
                if(arr[i][mid]==k)
                {
                    res = 1;
                    break;
                }
                else if(arr[i][mid]>k)
                {
                    h  = mid -1;
                }
                else if(arr[i][mid]<k)
                {
                    l = mid+1;
                }
            }
        }
        cout<<res<<endl;
    
}
