/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 2 - Question 2f">

  Given a radius, draw a circle with that radius. 
  Hint: Recall that a circle of radius r is defined as the set of points (x,y) where x2+y2 < r2.

*/

#include <stdio.h>
#include <math.h>

int main(){
	int radius;
	printf("Radius: ");
	scanf("%d", &radius);
	int x, y;
	for(x=-radius; x<=radius; x++){
		for(y=-radius; y<=radius; y++){
			if(radius*radius >= (x*x + y*y)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}