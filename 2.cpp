#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> merge_vector(vector<vector<int>>&v)
{
    int j=0;
    vector<vector<int>>ans;
    ans.push_back(v[0]);
    for(int i=1;i<v.size();i++)
    {
        if(ans[j][1]>=v[i][0])
        {
            ans[j][1]=max(ans[j][1],v[i][1]);
        }
        else
        {
            j++;
            ans.push_back(v[i]);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>>v={{1,4},{2,3},{5,8},{6,9}};
    vector<vector<int>>ans=merge_vector(v);
    for(int i=0;i<ans.size();i++)
{
    for(int j=0;j<ans[0].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;

}