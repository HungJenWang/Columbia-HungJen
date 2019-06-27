/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 2 - Question 2d">

  Similar to (c), but draw the upper right triangular part of the square (i.e., the other half of the square).

*/

#include <stdio.h>

int main(){
	int side, i, c = 0;
	printf("SIDE: ");
	scanf("%d", &side);
	for(i = 0; i < side; i++){
		for(c = 0; c < side; c++){
			if(i <= c) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}