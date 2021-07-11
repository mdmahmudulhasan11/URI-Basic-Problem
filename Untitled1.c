#include<stdio.h>

int main()
{
   int x=1,y=2,*ptr1,*ptr2,temp;

   ptr1=&x;
   ptr2=&y;

   *ptr1=5;
   *ptr2=6;
   printf("%d %d\n", x,y);
   x=3;
   y=4;
  printf("%d %d\n", *ptr1,*ptr2);


	return 0;
}
