// SC 7th First Program C
#include <stdio.h>

int main(void){
    char name[15];
    printf("What is your name:\n");
    scanf("%s", &name);
    printf("Hello, %s", name);

    return 0;
}