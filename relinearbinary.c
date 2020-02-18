#include<stdio.h>
#include<time.h>
int recursivelinear(int pos,int key,int a[],int size)
{ if(pos<size)
  {
  if(a[pos]==key)
  {
   return pos;

   }
 else
  {
    pos=pos+1;
    recursivelinear(pos,key,a,size);
  }
  }
 else 

 return -1;



}
int binaryrecursive(int beg,int end,int key,int a[])
{  int mid=(beg+end)/2;
   if(beg<=end)
   {if(a[mid]==key)
     return mid;
    
   else  if(a[mid]<key)
     {
       beg=mid+1;
       binaryrecursive( beg, end, key,a);
      }
     else
     {
       end=mid-1;
       binaryrecursive( beg, end, key,a);

      }
    }
   else 
   return -1;




}
void main()
{

  int arr[10],beg=0,end,size,k,choice,pos=0,posi,key;
  clock_t time;
  printf("\nenter the size of array : ");
  scanf("%d",&size);
  end=size-1;
  printf("\nenter the elements of the array in te sorted form : ");
    for(k=0;k<size;k++)
    scanf("%d",&arr[k]);
    printf("\nenter the key ");
    scanf("%d",&key); 
   printf("\nenter the option of  the array to find the key in linear or binary , PRESS 1 for linear and 2 for binary : ");
 scanf("%d",&choice);
  switch(choice)
  {
    case 1:  time=clock();
             posi=recursivelinear(pos , key, arr,size);
             time=clock()-time;
             printf("\nthe time taken is %lf",(double)time/CLOCKS_PER_SEC);
             break;
    case 2: time=clock();
            posi=binaryrecursive( beg, end, key,arr);
              time=clock()-time;
            printf("\nthe time taken is %lf",(double)time/CLOCKS_PER_SEC);
              break;
     default:printf("\nwrong choice");
 


  

   }
 

 if(posi==-1)
  { printf("\n the elemnt not found");
   }
   else
   printf("\n the position of the element is %d ",posi);

  





}

