

//function for area and perimeter of. rectangle

#include<stdio.h>
int area( int a,int b);
int perimeter(int a,int b);

int main()
{
int a,b,c,d;
printf("enter width");
scanf("%d",&a);

printf("enter width");
scanf("%d",&b);
c=area(a,b);
d=perimeter (a,b);

printf("\nare%d",c);
printf("\nperimeter%d",d);

return 0;
}    
int area(int a,int b)
{
int area;
area=(a*b);
return area;
}
int perimeter (int a,int b)                            
{
int perimeter;
perimeter=2*(a+b);
return perimeter;
}