#include <stdio.h>
int hrs;
int mins;
int tot_mins;
const int MINinaHOUR = 60;
int main() {
	printf("Input hours: ");
	scanf("%d", &hrs);
	printf("Input minutes: ");
	scanf("%d", &mins);
	tot_mins = mins + (hrs * MINinaHOUR);
	printf("Total: %d minutes.\n", tot_mins);
	return(0);
}