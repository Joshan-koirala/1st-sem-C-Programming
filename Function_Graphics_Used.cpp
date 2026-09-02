#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
 
int main()  
{     
    int gd=DETECT,gm;  
    initgraph(&gd,&gm,NULL);
    int i;
    for(i=0;i<200;i++){
    	putpixel(100+i,100+i,BLUE);
    	delay(40);//for delaying pixel 40 sec
	}
	rectangle(300,300,100,100);
	outtextxy(300,100,"CSIT");//print in XY co-ordinate
    getch();
	closegraph();  
}
