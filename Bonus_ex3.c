/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Questions>

  Q3 -> Write a program that prompts the user for a number and outputs whether the number is negative, positive or zero.
*/

#include <stdio.h>

int main(){
	double a;
	printf("Enter a number: ");
	scanf("%lf", &a);
	if(a>0) printf("Positive number\n");
	else if(a<0) printf("Negative number\n");
	else printf("Zero\n");
	return 0;
}
