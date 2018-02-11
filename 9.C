#include <stdio.h>
int tot_mins;
int hrs;
int mins;
const int MINinaHOUR=60;
int main()
{
 printf("Input minutes: ");
 scanf("%d",&tot_mins);
 hrs = (tot_mins / MINinaHOUR);
 mins = (tot_mins % MINinaHOUR);
 printf("%d Hours, %d Minutes.\n", hrs, mins);
 return(0);
}