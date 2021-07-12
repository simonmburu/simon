

#include<stdio.h>
int main()
{
int sum,mult,sub,rem,div,a,b;
printf("enter value is a and b\n");
scanf("%d%d",&a,&b);
sum=(a+b);
sub=(a-b);
mult=(a*b);
div=(a/b);
rem=(a%b);

printf("\n%d",sum);
printf("\n%d",sub);
printf("\n%d",mult);
printf("\n%d",div);
printf("\n%d",rem);

return 0;
}