#include<stdio.h>
int rem=0;
int euclid(int m,int n)
{
if(n==m)
{
return m;
}
else if(m>n)
{
return(euclid(m-n,n));
}
else
{
return(euclid(m,n-m));
}
}
void main()
{
int a,b,x;
printf("enter two numbers");
scanf("%d%d",&a,&b);
x=euclid(a,b);
printf("gcd of two numbers is:%d",x);
}
