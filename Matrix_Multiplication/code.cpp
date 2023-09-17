#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m1,n1;
    cin >> m1 >> n1;
    int mat1[m1][n1];
    for(int i = 0 ; i < m1 ;i++)
    {
        for(int j = 0 ; j < n1 ;j++)
        {
            cin >> mat1[i][j];
        }
    }
    int m2,n2;
    cin >> m2>>n2;
    int mat2[m2][n2];
    for(int i = 0 ; i < m2;i++)
    {
        for(int j =0 ; j<n2 ;j++)
        {
            cin >> mat2[i][j];
        }
    }
    int mat3[n1][m2];
    for(int i = 0 ; i < n1;i++)
    {
        for(int j =0 ; j <m2;j++)
        {
            mat3[i][j]=0;
            for(int k = 0;k<m2;k++)
            {
                mat3[i][j]+= mat1[i][k]*mat2[k][j];
                // cout<<mat1[i][j]<<"-"<<mat2[k][j]<<" ";
                // cout<<i<<j<<k<<" ";
            }
            // cout<<endl;
        }
    }
    for(int i = 0 ; i < n1;i++)
    {
        for(int j = 0 ; j < m2 ;j++)
        {
            if(j==m2-1)
            cout<<mat3[i][j];
            else cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
}
