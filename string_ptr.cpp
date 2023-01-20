#include<iostream>
using namespace std;
int count (string s,char *first,char *last)
{
    *first=s[0];
    *last=s[s.size()-1];
    char ch;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='t')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s;
    cin>>s;
    char first,last;
    int cnt=count(s,&first,&last);
    cout<<first<<" "<<last<<" "<<cnt;
    return 0;
}