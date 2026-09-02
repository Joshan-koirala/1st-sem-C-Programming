                 //input data for 2 students.
#include<stdio.h>
struct student{
	char name[50];
	int age;
	float total_mark;
};
int main(){
	struct student a[2];
	int i;
	for (i=0;i<2;i++){
		printf("Enter the name of the student: ");
	    scanf(" %[^\n]s",a[i].name);
	    printf("Enter the age of the student: ");
	    scanf(" %d",&a[i].age);
	    printf("Enter the total mark of the student: ");
	    scanf(" %f",&a[i].total_mark);
	    printf("\n");
	   
	}
	for (i=0;i<2;i++){
		printf("The name of the student : %s\n",a[i].name);
		printf("The age of %s : %d\n",a[i].name,a[i].age);
		printf("The total mark of %s : %.2f\n\n",a[i].name,a[i].total_mark);
	
	}
	return 0;
}

