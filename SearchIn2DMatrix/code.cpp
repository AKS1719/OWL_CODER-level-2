#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> mat(n,vector<int>(m));
    for(int i = 0 ; i < n  ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            cin >> mat[i][j];
        }
    }
    int key;
    cin >> key;
    string s ="false";
    for(int i = 0 ; i < n  ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            if(mat[i][j]==key)s="true";
        }
    }
    cout<<s;

}
