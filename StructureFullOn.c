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
		printf("Enter the price of the book: ");
		scanf("%d",&b[i].price);
		getchar();
		printf("\n");
	}
	printf("Book with price between 2000 and 3000 are:\n");
	int found=0;
	for(i=0;i<5;i++){
	  if (b[i].price > 2000 && b[i].price < 3000){
		printf("Title: %s, Author: %s, Price: %d\n", b[i].title, b[i].author, b[i].price);
	  }
	  found=1;
    }
    
    if (!found) {
        printf("No books found in this price range.\n");
    }
	return 0;
}
