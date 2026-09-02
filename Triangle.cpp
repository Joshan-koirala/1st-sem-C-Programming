#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
 
int main()  
{     
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,"c:\\tc\\bgi");
	  
   line(500,300,50,10); 
   line(50,10,80,60); 
   line(80,60,500,300);
    
    setcolor(WHITE);
    getch();
	closegraph();  
}
