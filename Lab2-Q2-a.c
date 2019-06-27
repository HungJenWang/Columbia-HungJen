/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 2 - Question 2a">

  Draw a w-wide h-high rectangular frame, using asterisks.

*/

#include <stdio.h>

int main(){
	int w, h, i, j, z;
	printf("Width: ");
	scanf("%d",  &w);
	printf("Height: ");
	scanf("%d", &h);
	for(i = 0; i < h; i++){
		if(i == 0 || i == h-1){
			for(j = 0; j < w; j++){
				printf("*");
			}
		}
		else{
			printf("*");
			for(z = 0; z < w-2; z++){
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}