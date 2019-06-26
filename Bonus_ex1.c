/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Questions>

  Q1 -> Write a program that prompts the user for two numbers and outputs the maximum.

*/

#include <stdio.h>

int main(){
	double a,b;
	printf("Enter num1: ");
	scanf("%lf", &a);
	printf("Enter num2: ");
	scanf("%lf", &b);
	if(a>b) printf("%lf\n", a);
	else printf("%lf\n", b);
	return 0;
}