//Q1:
int a=0,b=0;
for(i=0;i<N;i++)
{
    a=a+i;
}
for(j=0;j<M;j++)
{
    b=b+j;
}
//Answer:
//Time complexity = O(N+M)
//Space complexity = O(1);

//Q2:
int a=0;
for(int i=0;i<N;i++)
{
    for(int j=N;j>i;j--)
    {
        a=a+i+j;
    }
}
//Answer:
//Time complexity = O(N^2)

//Q3:
int i,j,k=0;
for(i=n/2;i<=n;i++)
{
    for(j=2;j<=n;j=j*2)
    {
        k=k+n/2;
    }
}
//Answer:
//Time complexity = O(n*log n)

//Q4:
int a=0,i=N;
while(i>0){
    a +=i;
    i/=2;
}
//Answer:
//Time complexity = O(log N)

//Q5:
for(int i=0;i<n;i++)
{
    i*=k;
}
//Answer:
//Time complexity = O(logkn)