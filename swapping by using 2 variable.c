#include <stdio.h>
#include <conio.h>
int main()
{
  int x,y;
  printf("Enter any two integers: ");
  scanf("%d%d",&x,&y);
  x = x + y;  
  y = x - y;  
  x = x - y;  
  printf("After Swapping x = %d, y = %d", x, y);
  getch();
}
