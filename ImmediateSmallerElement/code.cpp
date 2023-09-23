#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i <n ;i++)
    {
        cin >> arr[i];
    }
    for(int i = 0 ; i < n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            arr[i]=arr[i+1];
        }
        else arr[i]=-1;
    }
    arr[n-1]=-1;
    for(int x : arr)
    {
        cout<<x<<" ";
    }
}

