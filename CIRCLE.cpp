#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
 
int main()  
{     
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,NULL);
	  
   rectangle(300,200,150,100);
    
    setcolor(WHITE);
    getch();
	closegraph();  
}
