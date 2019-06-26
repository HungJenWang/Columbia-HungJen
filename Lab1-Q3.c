/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 1 - Question 3">

  Write a program that prompts the user for 
  the number of years of schooling and displays 
  a message indicating the educational level 
  (0, none; 1–5, elementary school; 6–8, middle school; 9–12, high school; more than 12, college). 
  Print a message to indicate bad data as well.
*/

#include <stdio.h>

int main(){
	int years;
	printf("number of years of schooling: ");
	scanf("%d", &years);
	if(years == 0) printf("None\n");
	else if(years>=1 && years<=5) printf("elementary school\n");
	else if(years>=6 && years<=8) printf("middle school\n");
	else if(years>=9 && years<=12) printf("high school\n");
	else if(years > 12) printf("College\n");
	else printf("Invalid\n");
	return 0;
}
