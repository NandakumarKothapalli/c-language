// C program to convert days in to years, weeks and days//
#include <stdio.h>
#include<conio.h>
int main()
{
   int days, years, weeks;
  clrscr();
    printf("Enter days: ");
    scanf("%d", &days);
    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));
    printf("YEARS: %d\nWEEKS: %d\nDAYS: %d\n", years, weeks,days);
    return 0;
}