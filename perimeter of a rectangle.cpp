//printf("enter length\n");
//scanf("%d",&L);

//printf("enter width\n");
//scanf("%d",&w);

//perimeter=2*(L*W)
//printf("perimeter of a rectangle\n");
//program to display perimeter of a rectangle

#include<stdio.h>
int main()
{
 int Perimeter,L,W;
 printf("enter length\n");
 scanf("%d",&L);

 printf("enter width\n");
 scanf("%d",&W);
Perimeter=2*(L+W);

printf("Perimeter of the rectangle%d\n", Perimeter);
    return 0;
}