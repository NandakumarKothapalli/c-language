#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char name[10],add[10];
int age;
float ht;
printf("Enter Name and Address and Age and Hieght:\n");
scanf("%s%s%d%f",&name,&add,&age,&ht);
clrscr();
printf("Name:%s\nAddress:%s\nAge:%d\nHeight:%f\n",name,add,age,ht);

}