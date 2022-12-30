#include<iostream>
#include<vector>
using namespace std;
void upper_half(vector<vector<int>>&matrix,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i)
            {
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
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
    upper_half(matrix,n);
    return 0;
}