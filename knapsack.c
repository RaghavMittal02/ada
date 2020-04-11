#include<stdio.h>
#include<conio.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}

int knapsack(int w[],int v[],int W,int n)
{
        if(n==0 || W==0)
            return 0;

        if(w[n-1]>W)
            return knapsack(w,v,W,n-1);

        else
        return max(v[n-1]+knapsack(w,v,W-w[n-1],n-1),knapsack(w,v,W,n-1));
}

void main (){

    int n,w[50],v[50],W;

    printf("Enter number of items: ");
    scanf("%d",&n);

    printf("\nEnter weights of item: ");
    for(int i=0;i<n;i++)
        scanf("%d",&w[i]);

    printf("\nEnter values of item: ");
    for(int i=0;i<n;i++)
        scanf("%d",&v[i]);

    printf("\nEnter weight of the sack: ");
    scanf("%d",&W);

    printf("\nthe max value : %d",knapsack(w,v,W,n));

}