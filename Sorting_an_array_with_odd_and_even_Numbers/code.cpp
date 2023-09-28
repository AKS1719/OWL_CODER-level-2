#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int odd=1;
    int even = 0;
    for(int i = 0 ; i <  n ;i++)
    {
        int a;
        cin >> a;
        if(a%2==0)
        {
            arr[even]=a;
            even+=2;
        }
        else{
            arr[odd]=a;
            odd+=2;
        }
    }
    for(int x : arr)
    {
        cout<<x << " ";
    }
}
