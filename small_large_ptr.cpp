#include<iostream>
using namespace std;
int small_large(int *a,int *b,int *c,int *large)
{
    *large=max(*a,max(*b,*c));
    return min(*a,min(*b,*c));
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int *ptr1,*ptr2,*ptr3;
    ptr1=&x;
    ptr2=&y;
    ptr3=&z;
    int large;
    int small=small_large(ptr1,ptr2,ptr3,&large);
    cout<<"largest = "<<large<<endl;
    cout<<"Smallest = "<<small;
    return 0;
}