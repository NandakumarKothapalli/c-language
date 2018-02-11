#include <stdio.h>
int percentage;
char grade;
char modifier;
int main() {
	printf("Enter the percentage correct: ");
	scanf("%d",&percentage);

	modifier = ' ';

	if (percentage > 100)
	 {
		printf("Error: out of bounds\n");
		return(1);
	 }
	else if (percentage < 0)
	{
	 printf("Error: out of bounds\n");
	 return(1);
	}
	else if (percentage>= 91)
	{
	 grade = 'A';
	 if(percentage>= 98)
	  {
	   modifier = '+';
	  }
	  else if (percentage<= 93)
	  {
	   modifier = '-';
	  }
	}
	else if (percentage>= 81)
	{
	 grade = 'B';
	 if (percentage>= 88)
	 {
	  modifier = '+';
	 }
	 else if (percentage<=83)
	  {
	   modifier = '-';
	  }
	}
	else if (percentage>= 71)
	{
	 grade = 'C';
	 if (percentage>= 78)
	  {
	   modifier = '+';
	  }
	  else if (percentage<= 73)
	  {
	   modifier = '-';
	  }
	}
	else if (percentage>= 61)
	{
	 grade = 'D';
	 if (percentage>= 68)
	 {
	  modifier = '+';
	 }
	 else if (percentage <= 63)
	 {
	  modifier = '-';
	 }
	}
	else
	{
	 grade = 'F';
	}
 printf("The grade is %c%c\n", grade, modifier);
 return(0);
}