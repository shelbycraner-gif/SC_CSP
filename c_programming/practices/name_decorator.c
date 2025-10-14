//SC 7th Name Decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    printf("What is your name?\n");
    scanf("%s", name);
    char dec1[] = "<<:";
    char dec2[] = ":>>";
    strcat(dec1, name);
    strcat(dec1, dec2);
    printf("Hi! %s\n", dec1);

    return 0;
}