/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Questions>

   Q8 -> Write a program that prompts the user for a character and outputs whether the character is a letter in the alphabet, a digit, or a special character.
*/

#include <stdio.h>

int main(){
	char a;
	printf("Enter a character: ");
	scanf("%c", &a);
	if(((int)a>=65 && (int)a<=90) || ((int)a>=97 && (int)a<=122)) printf("Letter in the alphabet\n");
	else if((int)a>=48 && (int)a<=57) printf("A digit\n");
	else (printf("A special character\n"));
	return 0;
}
