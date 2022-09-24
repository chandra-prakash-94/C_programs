/*C Program to Store Information of Students Using Structure*/
/* Reg No,- 22-27-04*/

#include<stdio.h>
struct student{
  char name[30];
  int roll;
  int age;
};

int main(){
  int n=5;
  struct student s[n];
  int i;
  printf("\nEnter Students' Details:");
  // storing information
  for(i=0;i<n;i++)
  {
      s[i].roll = i+1;
      printf("\nFor Roll %d,enter details:\n",s[i].roll );
      printf("Enter Name: ");
      scanf("%s",&s[i].name);
      printf("Enter Age: ");
      scanf("%d",&s[i].age);
  }
   // Displaying information
  printf("\nDisplaying students' Details: ");
  for(i=0;i<n;i++)
  {
      s[i].roll = i+1;
      printf("\nFor Roll %d,details are: ",s[i].roll );
      printf("\nName:%s", s[i].name);
      printf("\nAge: %d", s[i].age);
  }
  return 0;
}