#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int *ptrx,*ptry;
    ptrx=&x;
    ptry=&y;
    int prod;
    int *ptr_result=&prod;
    *ptr_result=(*ptrx)*(*ptry);
    cout<<prod;
    return 0;
}