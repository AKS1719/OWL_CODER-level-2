#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int dup =0,mis = 0;
    for(int i =0 ; i < n ;i++)
    {
        if(arr[i]!=i+1)
        {
            mis = i+1;
            break;
        }
    }
    for(int i =0 ; i < n-1 ;i++)
    {
        if(arr[i]==arr[i+1])
        {
            dup = arr[i];
            break;
        }
    }
    cout<<dup<<" "<<mis;
}
