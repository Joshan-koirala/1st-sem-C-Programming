#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
 
int main()  
{     
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,"c:\\tc\\bgi");
	  
   line(300,100,5,10); 
   line(5,10,80,60); 
   line(80,60,300,100);
    
    setcolor(WHITE);
    getch();
	closegraph();  
}
