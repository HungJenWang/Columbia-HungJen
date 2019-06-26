/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Questions>

  Q7 -> Write a program that prompts the user for a character and outputs whether the character is a vowel or consonant.
*/

#include <stdio.h>

int main(){
	char a;
	printf("Enter a character: ");
	scanf("%c", &a);
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='y') printf("Vowel\n");
	else printf("consonant\n");
	return 0;
}
