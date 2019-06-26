/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 1 - Question 1">

  Write a program that prompts the user for three numbers 
  and outputs whether the third number is strictly
  between the first number and the second number.
*/

#include <stdio.h>

int main(){
	int a,b,c;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	if((c > a && c < b) || (c < a && c > b)) printf("the third number is strictly between the first number and the second number. \n");
	else printf("NO\n");

	return 0;

}