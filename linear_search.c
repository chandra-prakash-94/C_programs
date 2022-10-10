/*C Program - Linear Search*/
/* Reg No,- 22-27-04*/
#include <stdio.h>

int main() {
  int n,i,flag =0;
  int arr[] = {10,20,10,0,2,20};
  int key = 120;

  n = sizeof(arr)/sizeof(arr)[0];
  for(i=0;i<n;i++){
      if(key==arr[i]){
        printf("Given key is found at index %d \n",i);
        flag++;
        //break;
      }
   }
   if(i==n){
     printf("Given key is not found in the array");
   }
  return 0;
}