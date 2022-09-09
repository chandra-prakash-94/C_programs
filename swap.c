/* C program to swap two numbers without temporary variable */
/* Author - 22-27-04 */
/* Date - 8 Sept 2022 */
#include<stdio.h>

int main(){
    int a,b;
    printf("\nEnter a: ");
    fflush(stdin);
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);

    //swapping
    a=a-b;
    b=a+b;
    a=b-a;

    printf("\nAfter swapping, value of a is :%d",a);
    printf("\nAfter swapping, value of b is :%d",b);

    return 0;
}