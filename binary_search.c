/*C Program - Binary Search*/
/* Reg No,- 22-27-04*/
#include <stdio.h>

int BinarySearch(int arr[], int n, int key){
   int l, r,mid;
   l=0, r=n-1;

   while(l<=r)
   {
   mid = (l+r)/2;
   if(key==arr[mid]){
      return mid;
   }
   else if (key<arr[mid]){
      r=mid-1;
   }
   else{
    l=mid+1;
   }
   }

   return -1;
}

int main() {
  int n, index;
  int arr[] = {5,9,17,23,2,20};
  int key = 17;

  n = sizeof(arr)/sizeof(arr)[0];
  index = BinarySearch(arr, n, key);
  printf("Given key is found at index %d \n",index);

  return 0;
}