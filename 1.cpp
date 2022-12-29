#include<iostream>
#include<vector>
using namespace std;
int perfect_mat(vector<vector<int>>&v)
{
for(int i=1;i<v.size();i++)
{
    for(int j=1;j<v[0].size();j++)
    {
        if(v[i][j]!=v[i-1][j-1])
        {
            return 0;
        }
    }
}
return 1;
}
int main()
{
int row,col;
cin>>row>>col;
vector<vector<int>> v(row,vector<int>(col));
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>v[i][j];
    }
}
int ans=perfect_mat(v);
if(ans==1)
{
    cout<<"Perfect matrix";
}
else
{
    cout<<"Not a perfect matrix";
}
return 0;
}