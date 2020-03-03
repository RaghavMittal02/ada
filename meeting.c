#include<stdio.h>

void insert_sort(int fi[],int n)
{
    int i,value,j;
    for(i=1;i<n;i++)
    {
        value=fi[i];
        j=i;
        while(j>0 && fi[j-1] > value)
        {
            fi[j] = fi[j-1];
            j--;
        }
        fi[j] = value;
    }
}
int main()
{
    int n,i,value,j;
    int si[n],fi[n],arr[n],arr1[n];
    scanf("%d\n", &n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &si[i]);
    }
for(i=0;i<n;i++)
    {
        scanf("%d", &fi[i]);
    }
    for(i=0; i<n; i++)
        arr[i]=fi[i];

    insert_sort(fi,n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(fi[i]==arr[j] && arr[j]!=-1)
            {
                arr[j]=-1;
                break;
            }
        }
        arr1[i]=si[j];
    }


    
    i=0;
    j=0;
    while(i<n)
    {
        printf("Meeting no: %d\n", (i+1));
        printf("Pair %d\n, %d\n",arr1[i],fi[i]);
        value = fi[i];
        while(arr1[j]<value && j<n)
        {
            j++;
        }
        i = j;
    }
    return 0;
}
