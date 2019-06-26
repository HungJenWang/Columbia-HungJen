/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Questions>

  Q5 -> Write a program that prompts the user for a number and outputs whether the number is even or odd.

*/

#include <stdio.h>

int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if(a%2==0) printf("Even\n");
	else printf("Odd\n");
	return 0;
}