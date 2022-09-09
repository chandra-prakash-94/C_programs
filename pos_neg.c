/* C program to check whether a given number is positive or negative */
/* Author - 22-27-04 */
/* Date - 8 Sept 2022 */
#include<stdio.h>

int main(){
    int a;
    printf("\nEnter a number: ");
    fflush(stdin);
    scanf("%d",&a);

    //Check for pos or neg
    if(a>0){
        printf("\n Given number is positive !!");
    }
    else if(a<0){
        printf("\n Given number is negative !!");
    }
    else{
        printf("\n Given number is 0 !!");
    }
    
    return 0;
}