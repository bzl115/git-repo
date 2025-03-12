#include <stdio.h>
#include <math.h>
struct dist
{	int x,y;
}pt1,pt2;

void main(){
float d; 
printf("Enter the coordinates for first point:\n ");
scanf(" %d%d",&pt1.x,&pt1.y);
printf("Enter the coordinates for second point:\n ");
scanf(" %d%d",&pt2.x,&pt2.y);
d=sqrt(pow(pt1.x-pt2.x,2)+pow(pt1.y-pt2.y,2));
printf("The distance between (%d,%d) and (%d,%d) is %f\n",pt1.x,pt1.y,pt2.x,pt2.y,d);
}