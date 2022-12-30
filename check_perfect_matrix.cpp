#include<iostream>
#include<vector>
using namespace std;
int check_perfect_matrix(vector<vector<int>>&matrix,int n)
{
    for(int i=0;i<n;i++)
    {
        if(matrix[i][i]==0)
        {
            return 0;
        }
        if(matrix[i][n-i-1]==0)
        {
            return 0;
        }
        matrix[i][i]=-1;
        matrix[i][n-i-1]=-1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]!=-1 && matrix[i][j]!=0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int ans=check_perfect_matrix(matrix,n);
    if(ans==1)
    {
        cout<<"given matrix is a perfect matrix";
    }
    else
    {
        cout<<"given matrix is not a perfect matrix";
    }
}