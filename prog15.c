#include<stdio.h>
void main()
{
int i,a[100];
printf("enter 10 nos");
for(i=1;i<10;i++)
{
scanf("%d\n",&a[i]);
}
for(i=1;i<10;i++)
{
if(a[i]==23)
{
printf("%d th element is equal to 23\n",i);
}
}
}
