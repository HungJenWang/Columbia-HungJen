/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 1 - Question 5">

  Write a program that prompts the user to 
  enter the month and year, and displays the 
  number of days in the month. For example, if the 
  user entered month 2 and year 2000, the program should 
  display that February 2000 has 29 days. If the user 
  entered month 3 and year 2005, the program should display 
  that March 2005 has 31 days.

*/

#include <stdio.h>

int main(){
	int month, year;
	printf("month: ");
	scanf("%d", &month);
	printf("year: ");
	scanf("%d", &year);
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		switch(month){
			case 1:
				printf("January %d has 31 days\n", year);
				break;
			case 3:
				printf("March %d has 31 days\n", year);
				break;
			case 5:
				printf("May %d has 31 days\n", year);
				break;
			case 7:
				printf("July %d has 31 days\n", year);
				break;
			case 8:
				printf("August %d has 31 days\n", year);
				break;
			case 10:
				printf("October %d has 31 days\n", year);
				break;
			case 12:
				printf("December %d has 31 days\n", year);
				break;
		}
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11){
		switch(month){
			case 4:
				printf("April %d has 30 days\n", year);
				break;
			case 6:
				printf("June %d has 30 days\n", year);
				break;
			case 9:
				printf("September %d has 30 days\n", year);
				break;
			case 11:
				printf("November %d has 30 days\n", year);
				break;
		}
	}
	else if(month == 2){
		if(year%4==0){
			if(year%100!=0){
				printf("February %d has 29 days\n", year);
			}
			else{
				if(year%400==0){
					printf("February %d has 29 days\n", year);
				}
				else{
					printf("February %d has 28 days\n", year);
				}
			}
		}
		else{
			printf("February %d has 28 days\n", year);
		}
	}
	else{
		printf("Invalid\n");
	}
	return 0;

}


