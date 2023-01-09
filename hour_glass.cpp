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
int sum=0,ans=0;
for(int i=0;i<=n-3;i++)
{
    for(int j=0;j<=m-3;j++)
    {
        sum=0;
        for(int k=j;k<j+3;k++)
        {
            sum=sum+matrix[i][k];
            sum=sum+matrix[i+2][k];
        }
        sum+=matrix[i+1][j+1];
        if(ans<sum)
        {
            ans=sum;
        }
    }
} 
cout<<ans;
}