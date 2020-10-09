// https://www.facebook.com/nishit.vibhandik/posts/1414548848736181
// Subscribed by Nishit Vibhandik

#include <stdio.h>
#include <windows.h>

COORD c = {0, 0};
void setxy (int x, int y)
{
 c.X = x; c.Y = y; // Set X and Y coordinates
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() 
{ 
 int i,j;
 setxy(5,0);
 printf("Set Your Game Logic in following Area.") ;
 
 //Top border line...
 setxy(10,5); 
 for(j=0; j<20; j++)
  printf("%c", 223);
 
 //Bottom border line... 
 setxy(10,15);
 for(j=0; j<=20; j++)
  printf("%c", 223);
 
 //Left and Right border line...
 for(j=0; j<10; j++)
 {
  setxy(10,5+j);
  printf("%c",219);
  
  setxy(30,5+j);
  printf("%c",219);
 }
 printf("\n");
 return 0; 
}
