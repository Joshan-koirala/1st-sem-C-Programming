//2) sum of input times.
#include<stdio.h>
struct Time{
	int hours;
	int minutes;
	int seconds;	
};
struct Time add(struct Time t1, struct Time t2);
	
int main() {
    struct Time t1, t2, result;
    
    printf("Enter hours for the first time: ");
    scanf("%d", &t1.hours);
    printf("Enter minutes for the first time: ");
    scanf("%d", &t1.minutes);
    printf("Enter seconds for the first time: ");
    scanf("%d", &t1.seconds);
    printf("\n");
    printf("Enter hours for the second time: ");
    scanf("%d", &t2.hours);
    printf("Enter minutes for the second time: ");
    scanf("%d", &t2.minutes);
    printf("Enter seconds for the second time: ");
    scanf("%d", &t2.seconds);
    printf("\n");
    result = add(t1, t2);
    printf("Sum of the two times:%d hours %d minutes and %d seconds\n",result.hours,result.minutes,result.seconds);
    
    return 0;
}
struct Time add(struct Time t1, struct Time t2) {
    struct Time sum={0,0,0};
    sum.seconds = t1.seconds + t2.seconds;
    if(sum.seconds >= 60) {
    	sum.minutes += sum.seconds/60;
        sum.seconds =  sum.seconds%60;
    }
    sum.minutes += t1.minutes + t2.minutes;
    if(sum.minutes >= 60){
    	 sum.hours += sum.minutes/60;
         sum.minutes = sum.minutes%60;
	}
    sum.hours += t1.hours + t2.hours;
    return sum;
}
