#include <stdio.h>
 int main ()  {

   int a = 0;
   int b = 0;
   int c = 0;
    
   printf("input two number");
 
   scanf("%d %d", &a, &b);

   c = a;
   a = b;
   b = c;

   printf("%d %d\n", a, b);
}
