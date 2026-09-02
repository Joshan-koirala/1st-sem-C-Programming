#include<stdio.h>
struct Book{
	char title[50];
	char author[50];
	int price;
}b[5];
int main(){
	int i;
	for(i=0;i<5;i++){
		printf("Enter the title of the book: ");
		scanf(" %[^\n]s",b[i].title);
		getchar();
		printf("Enter the author of the book: ");
		scanf(" %[^\n]s",b[i].author);
		getchar();
		printf("Enter the title of the book: ");
		scanf("%d",& b[i].price);
	
	}
}
