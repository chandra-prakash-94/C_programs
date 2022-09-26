/*C Program - Header File*/
/* Reg No,- 22-27-04*/
#include<stdio.h>
#include"calc_header.h"

int main(){
  int n, result;
  printf("Enter a number: ");
  scanf("%d",&n);
  result=square(n);
  printf("\nResult is %d",result);
  return 0;
}