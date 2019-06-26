/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Bonus Questions>

  Q2 -> Write a program that prompts the user for three numbers and outputs the maximum.
*/

#include <stdio.h>

int main(){
	double a,b,c;
	printf("Enter num1: ");
	scanf("%lf", &a);
	printf("Enter num2: ");
	scanf("%lf", &b);
	printf("Enter num3: ");
	scanf("%lf", &c);
	if(a>b){
		if(a>c) printf("%lf\n", a);
		else printf("%lf\n", c);
	}
	else{
		if(b>c) printf("%lf\n", b);
		else printf("%lf\n", c);
	}
	return 0;
} 
