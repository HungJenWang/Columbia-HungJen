/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 2 - Question 2b">

  Draw an X where each stroke has len asterisks. Ex. (len=5)

*/

#include <stdio.h>

int main(){
	int len;
	printf("LEN: ");
	scanf("%d", &len);
	int i, j;
	for(i = 0; i < len; i++){
		for(j = 0; j < len; j++){
			if(i == j || i == len - j - 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}