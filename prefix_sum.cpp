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
    for(int i=0;i<n;i++)
    {   
        for(int j=1;j<m;j++)
        {
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    //prefix_sum_of_col
    for(int i=1;i<n;i++)
    {   
        for(int j=0;j<m;j++)
        {
            matrix[i][j]+=matrix[i-1][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
 
}