/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 1 - Question 4">

  Write an interactive program that contains an if statement that may be
used to compute the volume of a cube (volume = side3) or a sphere
(volume = 4πr3) after prompting the user to type the first character of
the figure name (C or S).

*/

#include <stdio.h>

int main(){
	char a;
	double side;
	double volume;
	double radius;
	double pi = 3.14159; //define pi
	printf("Cube or Square? ");
	scanf("%c", &a);
	if(a == 'C'){
		printf("Side = ");
		scanf("%lf", &side);
		volume = side * side * side;
		printf("volume = %lf\n", volume);
	}
	else if(a == 'S'){
		printf("Radius = ");
		scanf("%lf", &radius);
		volume = 4 * pi * radius * radius * radius / 3;
		printf("volume = %lf\n", volume);
	}
	else{
		printf("Invalid\n");
	}
	return 0;
}