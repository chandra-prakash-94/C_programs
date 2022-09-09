/* C program to check whether a given year is leap or not */
/* Author - 22-27-04 */
/* Date - 8 Sept 2022 */
#include<stdio.h>

int main(){
    int year;
    printf("\nEnter a Year: ");
    fflush(stdin);
    scanf("%d",&year);

    //Check for leap year
    if(year%400==0){
        printf("\n Given year is Leap Year !!");
    }
    else if(year%100==0){
        printf("\n Given year is not Leap Year !!");
    }
    else if(year%4==0){
        printf("\n Given year is Leap Year !!");
    }
    else{
        printf("\n Given year is not Leap Year !!");
    }
    return 0;
}