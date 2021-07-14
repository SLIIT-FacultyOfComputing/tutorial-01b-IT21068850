/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2; 
  float avg;

  printf("Enter mark 01 :\n");
  scanf("%f",&mark1);  

  printf("Enter mark 02 :\n");
  scanf("%f",&mark2);
  
  avg=(mark1+mark2)/2;

  printf("Average : %.2f",avg);

  return 0;
}

