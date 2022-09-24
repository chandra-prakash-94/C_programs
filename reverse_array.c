/* C program to print elements of array in reverse order */
/* Author - 22-27-04 */
/* Date - 25 Sept 2022 */
#include<stdio.h>
#define N 5
int main(){
  int arr[N];
  int i;
  
  printf("Enter Elements of array: ");
  for(i=0;i<N;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("Elements of array are: ");
  for(i=0;i<N;i++)
  {
      printf("%d ",arr[i]);
  }
  printf("\nElements in reverse order are: ");
  for(i=N-1;i>=0;i--)
  {
      printf("%d ",arr[i]);
  }

  return 0;
}