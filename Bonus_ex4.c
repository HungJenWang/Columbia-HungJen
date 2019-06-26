/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Questions>

  Q4 -> Write a program that prompts the user for a number and outputs whether the number is divisible by 5 and 11 or not.
*/

#include <stdio.h>

int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if(a%5==0 && a%11==0) printf("Divisible by 5 and 11\n");
	else printf("Not divisible by 5 and 11\n");
	return 0;
}
