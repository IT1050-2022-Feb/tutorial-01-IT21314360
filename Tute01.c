/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float sub1, sub2, average;

  printf("Subject 1 marks = ");
  scanf("%f", &sub1);

  printf("Subject 2 marks = ");
  scanf("%f", &sub2);

  average = (sub1 + sub2)/2;

  printf("The average of the marks is = %.2f", average);
  
  return 0;
}

