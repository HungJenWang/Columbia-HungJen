/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 2 - Question 2e">

  Similar to (c), but draw the trapezoid with the bottom height ele- ments of the triangle. Ex. (side=5, height=3):

*/

#include <stdio.h>
 
int main(){
	int side, height, i, c;
	printf("SIDE: ");
	scanf("%d", &side);
	printf("HEIGHT: ");
	scanf("%d", &height);
	side = side + 1;
	for(i = height; i > 0; i--){
		for(c = side; c > 0; c--){
			if(c<=side && i<c) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}