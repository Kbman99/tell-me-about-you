//Kyle Bowman
// August 31st, 2015
/*Tell me some things about you!*/

#define _CRT_SECURE_NO_WARNINGS    // to avoid scanf warning or error
#include <stdio.h>

int main()
{
	char first_initial;
	int birthYear;
	int age;
	int year = 2015;

	printf("Hello my name is Kyle");

	printf("\nPlease enter the initial of your first name\n");
	scanf("%c", &first_initial);

	printf("In which year were you born\n");
	scanf("%d", &birthYear);

	age = year - birthYear;

	printf("%c, you were born in %d, and you are %d years old.\n", first_initial, birthYear, age);
	return 0;
}