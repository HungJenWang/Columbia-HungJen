/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 1 - Question 7">

  Add a prompt to the above program asking 
  “How many minutes from now do you expect to be home?”, 
  and output a sentence saying ”You will get home at HH:MM”.

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
	int homemin;
	int beforetime;
	int totaltime;
	int afterhour;
	printf("How many minutes from now do you expect to be home? ");
	scanf("%d", &homemin);
	beforetime = hour * 60 + min;
	totaltime = beforetime + homemin;
	afterhour = totaltime / 60;
	totaltime = totaltime - afterhour * 60;
	printf("You will get home at %d:%02d\n", afterhour, totaltime);
	return 0;
}
