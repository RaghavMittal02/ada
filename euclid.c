#include<stdio.h>
int rem=0;
int euclid(int m,int n)
{
if(n==0)
{
return m;
}
else 
{
return(euclid(n,m%n));
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
