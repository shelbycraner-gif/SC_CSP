// SC 7th Old Enough
#include <stdio.h>
#include <string.h>
/*
vote-18
drive-16
drive permit-15
school-4
42-vote
7-school
17-drive
3-not old enough for anything
*/
int main(void){
    int age;

    printf("How old are you: \n");
    scanf("%d", &age);
    if(age <= 3){
        printf("You should not start school or do anything!\n");
    }

    else if(age >= 15) {
        printf("You should get your drivers permit\n");
    }else if(age >= 16){
        printf("You should start driving!\n");
    }else if(age >= 5){
        printf("You should be in school!\n");
    }else{
        printf("You are failing :(\n");
    }

    return 0;
}