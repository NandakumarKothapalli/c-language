#include<stdio.h>
int main()
{
 int n,num,i;
 int large;
 printf("Enter the values of n:");
 scanf("%d",&n);
 prinf("Number");
 scanf("%d",&large);
 for(i=2;i<=n;i++)
 {
 printf("Number %d:",i);
 scanf("%d",&num);
 if(large<num)
 large=num;
 }
 printf("Largest number is:%d",large);
 return 0;
}