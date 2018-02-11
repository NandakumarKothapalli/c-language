#include <stdio.h>

float f;
int i;
char c;
int main() {
f=1.0;
i = 1;
c='A';
printf("%f as %%d: %d\n", f, f);
printf("%d as %%f: %f\n", i,i);
printf("%c as %%d: %d\n", c,c);
return(0);
}