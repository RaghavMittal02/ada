#include<stdio.h>
int small=0
void min(int m,int n)
{
if(m<n)
{
small=m;
}
else
small=n;
}
int gcd(int m,int n)
{
min(m,n);
while(small>=1)
{
if(m%small==0 && n%small==0)
return small;
small=small-1;
} return 1;
}
void main()
{
int a,b,x;
printf("enter two numbers");
scanf("%d%d",&a,&b);
x=euclid(a,b);
printf("gcd of two numbers is:%d",x);
}
