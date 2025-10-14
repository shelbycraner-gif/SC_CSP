//SC 7th Silly Sentences
#include <stdio.h>
#include <string.h>

int main(void){
    char noun[20];
    char verb[20];
    char verb2[20];
    char adjective[20];
    printf("Give me a noun: \n");
    scanf("%s", noun);
    printf("Give me a verb: \n");
    scanf("%s", verb);
    printf("Give me an adjective: \n");
    scanf("%s", adjective);
    printf("Give me another verb: \n");
    scanf("%s", verb2);

    printf("The %s was %s around the area. It saw a %s bug and decided to %s with it.\n", noun, verb, adjective, verb2);
    return 0;
}