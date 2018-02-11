#include<stdio.h>
void main()
{
int a,b,sum=0,i,n;
printf("Enter a,b values:\n");
scanf("%d%d",&a,&b);
printf("Sum:%d\n",(a+b));
printf("Product:%d\n",(a*b));
printf("Enter sum of N values:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d^2+",i);
sum=sum+(i*i);
}
printf(".............is%d:\t",sum);
}
