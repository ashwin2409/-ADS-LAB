#include<stdio.h>
#include<conio.h>
int main()
{
 int arr1[50],arr2[50],i,k,size1,size2,merge[50];
 clrscr();
 printf("enter the size of element");
 scanf("%d",&size1);
 printf("Enter the elements in array1");
 for(i=0;i<size1;i++)
 {
  scanf("%d",&arr1[i]);
  merge[i]=arr1[i];
  }
  k=i;
  printf("Enter the size of elements");
  scanf("%d",&size2);
  printf("Enter the elements in array2");
  for(i=0;i<size2;i++)
  {
    scanf("%d",&arr2[i]);
    merge[k]=arr2[i];
    k++;
  }
  printf("enter the all elements");
  for(i=0;i<k;i++)
  printf("%d",&merge[i]);
  getch();
  return 0;
 }

