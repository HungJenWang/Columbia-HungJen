/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 1 - Question 2">

  Write a program that prompts the user 
  for a letter and outputs whether the letter is uppercase.
*/

#include <stdio.h>

int main(){
	char a;
	int b;
	printf("Enter a letter: ");
	scanf("%c", &a);
	b = (int)a;
	if(b>=65 && b<=90) printf("The ltter is uppercase\n");
	else printf("Not uppercase!\n");

	return 0;
}