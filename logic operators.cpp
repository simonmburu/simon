

#include<stdio.h>
int main()
{
int a,j;
printf("enter value of a\n");
scanf("%d",&a);
printf("enter value of j\n");
scanf("%d",&j);
if(a<j)
{
printf("\n1 true");

}
else
{
printf("\n1 false");
}
if(a=j)
{
printf("\n2 true");
}
else
{
printf("\n2 false");
}
if(a>=j)
{
printf("\n3 true");
}
else
{
printf("\n3 false");
}
if(a<=j)
{
printf("\n4 true");
}
else
{
printf("\n4 false");
}
 if(a||j)
{
printf("\n5 true");
}
else
{
printf("\n5 false");
}
return 0;
}