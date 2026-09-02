#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
 
int main()  
{     
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,"c:\\tc\\bgi");
	  
   line(500,200,5,10); 
   line(5,10,80,60); 
   line(80,60,500,200);
    
    setcolor(WHITE);
    getch();
	closegraph();  
}
