#include<iostream>

#include<stdio.h>
using namespace std;
int main()
{ 
    int a[50], size,num, pos;

     printf("enter the size of array: ");
     scanf("%d",&size);

     if(size<0)
      {
          printf("negative cannot be an input");
      }

     else if (size<=50)
      {
     
        for(int i=0;i<size;i++)
        {
          printf("enter element in index %d ",i);
          scanf("%d",&a[i]);
     
        }
        
       for(int i=0;i<size;i++)
        {
          printf("%d ",a[i]);
        }

        printf("\nEnter element you want to insert: ");
        scanf("%d",&num); 

         printf("Enter position at which you want to insert: ");
        scanf("%d",&pos); 
        if(pos<=0||pos>size+1)
       {
        printf("Invaild input");
       }
        else
       
       {
        for(int i=(size-1);i>=(pos-1);i--)
       {
        a[i+1]=a[i];

       }
       a[pos-1]=num;

       size++;
       //or i can write size+1 in below for loop
       for(int i=0;i<size;i++)
        {
          printf("%d ",a[i]);
        }

      }}
     else
      {
          printf("overflow");
      }
     return 0;
}