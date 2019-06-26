/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Questions>

  Q9 -> Write a program that prompts the user for a number from 1 to 7 and outputs the name of that day of the week (e.g., 1=Sunday, 2=Monday, etc.).
*/

#include <stdio.h>

int main(){
	int a;
	printf("Enter a num from 1 to 7: ");
	scanf("%d", &a);
	switch (a){
		case 1:
			printf("Sunday\n");
			break;
		case 2:
			printf("Monday\n");
			break;
		case 3:
			printf("Tuesday\n");
			break;
		case 4:
			printf("Wednesday\n");
			break;
		case 5:
			printf("Thursday\n");
			break;
		case 6:
			printf("Friday\n");
			break;
		case 7:
			printf("Saturday\n");
			break;
	}
	return 0;
}