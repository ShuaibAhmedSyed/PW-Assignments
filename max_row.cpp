#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int> (m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    //prefix_sum_of_row
    int max_row=-1;
    int sum=-1;
    for(int i=0;i<n;i++)
    {   
        for(int j=1;j<m;j++)
        {
            matrix[i][j]+=matrix[i][j-1];
        }
        if(matrix[i][m-1]>sum)
        {
            sum=matrix[i][m-1];
            max_row=i+1;
        }
    }
    cout<<max_row;
}