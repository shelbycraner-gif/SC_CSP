//SC 7th Name Decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    printf("What is your name?\n");
    scanf("%s", name);
    char dec1[] = "<<:";
    char dec2 = ":>>";
    strcat(dec1, name);
    //printf(dec1);
    strcat(dec1, ":>>");
    //printf(dec1);
    printf("Hi! %s\n", dec1);

    return 0;
}
