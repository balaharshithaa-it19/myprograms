#include<stdio.h>

int main()
{
 int i,n,factorial=1;
 printf("enter a no to find it's factorial");
 scanf("%d", &n);
 for(i=1;i<=n;i++)
 {
  factorial=factorial*i;
 }
printf("Factorial of %d = %d", n, factorial);
return 0;
}
