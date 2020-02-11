#include<stdio.h>

int main()
{
    int key,beg=0,end=0,mid=0,size,count=0,pos=0,pos1=0,i,j,k;
    int arr[10];
    printf("\nenter the size of the array");
    scanf("%d",&size);
    printf("\nenter the elements of array ");
    for(k=0;k<size;k++)
    scanf("%d",&arr[k]);
    printf("\nenter the key ");
    scanf("%d",&key);
    end=size-1;
    while(beg<=end)
    {
      mid=(beg+end)/2;
      if(arr[mid]==key)
       {  count++;
          pos=mid;
          pos1=mid; 
          for(i=pos+1;arr[i]==arr[mid];i++)
          {  count++;
               
          }
          for(j=pos-1;arr[j]==arr[mid];j--)
          {  count++;
               
          }
          printf("\nthe element %d is found from %d to %d position and number of element are %d",key,(j+1),(i-1),count);
          return 0; 
       }

      else if(arr[mid]<key)
        {
           beg=mid+1;
        }
      else
        {
             end=mid-1;
        }
    }
   printf("\nthe key not found result is -1");
   return -1;

}







