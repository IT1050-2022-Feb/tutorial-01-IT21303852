/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int multiply(int no1, int no2); //function
int maximum(int no1, int no2); //function
int minimum(int no1, int no2); //function
//begin function main
int main() {
   int no1, no2; //declaring variables
   printf("Enter a value for no 1 : "); //prompt
   scanf("%d", &no1); //read value
   printf("Enter a value for no 2 : "); //prompt
   scanf("%d", &no2); //read value
   printf("%d ", minimum(no1, no2)); //print min
   printf("%d ", maximum(no1, no2)); //print max
   printf("%d ", multiply(no1, no2)); //print muliplied amount
   return 0;

   //end function main
}

int minimum(int no1, int no2) //function to find minimum
{
  if(no1 < no2) 
    return no1;

   else
    return no2; 
}

int maximum(int no1, int no2) //function to find maximum
{
  if(no1 > no2)
    return no1;

   else
    return no2; 
}

int multiply(int no1, int no2) //function to find multiplied amount
{
   return no1 * no2; 
}
