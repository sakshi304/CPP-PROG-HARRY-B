new.cpp
#include<stdio.h>
#include<graphics.h>
//Function for finding absolute value
int abs (int n)
{
return ( (n>0) ? n : ( n * (-1)));
}
//DDA Function for line generation
void DDA(int X1, int Y1, int X2, int Y2)



{
// calculate dx & dy
int dx = X2 - X1;
int dy = Y2 - Y1;
// calculate steps required for generating pixels
int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
// calculate increment in x & y for each steps
float Xinc = dx / (float) steps;
float Yinc = dy / (float) steps;
// Put pixel for each step
float X = X1;
float Y = Y1;
for (int i = 0; i <= steps; i++)
{
putpixel (X,Y,YELLOW); // put pixel at (X,Y)
X += Xinc; // increment in x at each step
Y += Yinc; // increment in y at each step
delay(500); // for visualization of line-
// generation step by step
}
}
// Driver program
int main()
{
int gd = DETECT, gm;
// Initialize graphics function
initgraph (&gd, &gm, (char *)"");
int x1, y1, x2, y2;
printf("\n Enter starting coordinates of a line:");
scanf("%d%d",&x1,&y1);
printf("\n Enter ending coordinates of a line:");
scanf("%d%d",&x2,&y2);
DDA(x1,y1,x2,y2);
getch();
closegraph();
return 0;
}