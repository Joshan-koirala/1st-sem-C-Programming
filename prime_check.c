#include <stdio.h>
#include <stdlib.h>

struct pt{
	int age;
	char name[20];

}*p;
int main(){
	printf("enter tghe name: ");
	scanf (" %[^\n]s",p->name);
	printf("%s",p->name);
	return 0;
	
}
