#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
 
int main()  
{     
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,NULL);  
    circle(300,200,150);
      
    setcolor(WHITE);
    getch();
	closegraph();  
}
