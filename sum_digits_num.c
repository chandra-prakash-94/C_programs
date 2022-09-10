/* C program to print sum of digits of given number */
/* Author - 22-27-04 */
/* Date - 8 Sept 2022 */
#include<stdio.h>

int main(){
    int n, sum=0;
    printf("\n Enter your number: ");
    scanf("%d",&n);

    while(n!=0){
        sum += n%10;
        n = n/10; 
    }

    printf("\n Sum of digits is: %d", sum);
    return 0;
}