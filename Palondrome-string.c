#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
int main() 
{ 
char s1[15],s2[15]; 
clrscr(); 
printf("Enter a string: "); 
scanf("%s",s1); 
strcpy(s2,s1); 
strrev(s2); 
if(strcmp(s1,s2)==0) 
printf("%s is palindrome",s1); 
else 
printf("%s is not palindrome",s1); 
getch(); 
return 0;
} 

