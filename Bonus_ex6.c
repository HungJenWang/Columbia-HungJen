/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Questions>

   Q6 -> Write a program that prompts the user for a year and outputs whether the year is a leap year.
*/

#include <stdio.h>

int main(){
	int a;
	printf("Enter an year: ");
	scanf("%d", &a);
	if(a%4==0){
		if(a%100!=0) printf("Leap year\n");
		else{
			if(a%400==0) printf("Leap year\n");
			else printf("Not Leap year\n");
		}
	}
	else printf("Not Leap year\n");
	return 0;
}
