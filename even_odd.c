/* C program to check whether a given number is even or odd */
/* Author - 22-27-04 */
/* Date - 8 Sept 2022 */
#include<stdio.h>

int main(){
    int a;
    printf("\nEnter a number: ");
    fflush(stdin);
    scanf("%d",&a);

    //Check for even or odd
    if(a%2==0){
        printf("\n Given number is even !!");
    }
    else{
        printf("\n Given number is odd !!");
    }
    
    return 0;
}