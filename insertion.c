
#include <stdio.h> 
#include<time.h>  

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  

void main() 
{ 
    int arr[10],n,i;
clock_t time;
printf("enter the size of array");
scanf("%d",&n);
printf("\n enter the element of the array");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
time=clock();
insertionSort(arr,n);
time=clock()-time;
printf("\nthe sorted array is:");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
;
}
printf("\n the time taken is:%lf",(double)time/CLOCKS_PER_SEC);
}
    
