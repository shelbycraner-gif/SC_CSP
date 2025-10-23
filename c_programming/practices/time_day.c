// SC 7th Time of Day C
#include <stdio.h>
#include <time.h>

int main(void){
    time_t now = time(NULL);
    int time;
    printf("What is the current time for you in MILITARY TIME:\n");
    scanf("%d", &time);
    
    printf("The current time is %d\n", time);
    if (time <= 12){
        printf("Good Morning!\n");
    } else if (time < 17){
        printf("Good afternoon!\n");
    } else {
        printf("Good evening!\n");
    }
    return 0;
}