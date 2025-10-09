// SC 7th Strings Notes
#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Andrew";

    char last_name[25];
    printf("Tell me your last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    full_name[0] = '\0';
    printf("%s\n", full_name);
    strcat(full_name, name);
    printf("[%s]\n", full_name);
    printf("%s\n", last_name[0]);
    last_name[0] = 'C';
    strcat(full_name, " ");
    printf("[%s]\n", full_name);
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    printf("Your name is %s %s", name, last_name);
    printf("%zu \n",strlen(name));
    printf("%zu \n",sizeof(name));

    //What is the difference between a string and a character?
    // double quotation is for strings, single quotations is for a character
    //What types of quotation marks do we need for a string?
    // double quotation
    //What library do we need to include to access the string functions in C?
    // <string.h>
    //List functions the library allows us to use.
    // strcat(), strlen(), sizeof()
    //How do we concatenate strings in C?
    // strcat()
    //How do we get individual characters from a string in C?
    // same way you would get a character from a list in python, call the variable and in brackets do the character letter you want

    return 0;
}