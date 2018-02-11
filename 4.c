 #include<stdio.h>
 main()
{
 int a;
 b:printf("enter the age::");
 	scanf("%d",&a);
 	if(a>18 && a<30)
 	{
 		printf("AGE=%d\n",a);
 	
	}
	else
	{
		printf("invalid AGE\n\n");
			goto b;
	}
 }
