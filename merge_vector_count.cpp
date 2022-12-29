#include<iostream>
#include<vector>
using namespace std;
int merge_vector(vector<vector<int>>&v)
{
    int count=0;
    int j=0;
    vector<vector<int>>ans;
    ans.push_back(v[0]);
    for(int i=1;i<v.size();i++)
    {
        if(ans[j][1]>v[i][0])
        {
            count++;
            ans[j][1]=max(ans[j][1],v[i][1]);
        }
        else
        {
            j++;
            ans.push_back(v[i]);
        }
    }
    return count;
}
int main()
{
    vector<vector<int>>v={{1,4},{2,3},{4,5},{6,7}};
    int ans=merge_vector(v);
    cout<<ans;
    return 0;

}
