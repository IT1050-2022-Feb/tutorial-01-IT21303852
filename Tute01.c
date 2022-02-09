/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
// begin function main
int main() {

  float total, average; //declaring variables
  int mark1, mark2; //declaring variables

  printf("Enter mark 1: "); //prompt
  scanf("%d", &mark1); //record value

  printf("Enter mark 2: "); //prompt
  scanf("%d", &mark2); //record value

  total = mark1 + mark2; //calculating the total
  average = total / 2.0; //calculating the average

  printf("Total: %.2f\nAverage: %.2f\n", total, average); //print values

  return 0;

  //end function main
}

