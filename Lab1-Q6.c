/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 1 - Question 6">

  Write a program that first prompts the 
  user for the sunset hour and sunset minute, 
  then outputs “Good morning.”, “Good afternoon.”, 
  or “Good evening.” depending on whether the current 
  time is 
  
  midnight-noon, 
  noon- sunset, or 
  sunset-midnight 

  respectively. You will need to retrieve the current time 
  (24 hour format). To do so, include the following code in your program:

*/

#include <stdio.h>
#include <time.h>

int main(){
	time_t t;
	struct tm *now;
	t = time(0); /* get current time */
	now = localtime(&t); /* adjust for local timezone */
	int hour = now->tm_hour; /* retrieve current hour */
    int min = now->tm_min;   /* retrieve current min */
/* Given from question above ---------------------------------------*/
	// printf("hour: %d, minute: %d\n", hour, min); TEST FOR CORRECTNESS
	int sunsethour;
	int sunsetminute;
	int midnightmor = 0;
	int midnightni = 24 * 60;
	int noon = 12 * 60;
	int TOTAL_SUNSET_TIME;
	int TOTAL_NOW_TIME;
	printf("Please enter in 24 hour time!\n");
	printf("Sunset hour: ");
	scanf("%d", &sunsethour);
	printf("Sunset minute: ");
	scanf("%d", &sunsetminute);
	TOTAL_SUNSET_TIME = sunsethour * 60 + sunsetminute;
	TOTAL_NOW_TIME = hour * 60 + min;
	if(midnightmor <= TOTAL_NOW_TIME && TOTAL_NOW_TIME < noon) printf("Good morning\n");
	else if(noon < TOTAL_NOW_TIME && TOTAL_NOW_TIME < TOTAL_SUNSET_TIME) printf("Good afternoon\n");
	else if(TOTAL_SUNSET_TIME < TOTAL_NOW_TIME && TOTAL_NOW_TIME <= midnightni) printf("Good evening\n");

	return 0;

}





