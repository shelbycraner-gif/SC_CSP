// SC 7th Conditionals Notes
#include <stdio.h>
#include <string.h>
/* Logical Operators
&& and
|| or
! not
*/

int main(void){
    int grade;
    char name[50];

    printf("What is your grade percent?\n");
    scanf("%d", &grade);
    printf("What is your name?\n");
    scanf("%s", &name);

    //printf("%d\n", strcmp(name, "Ms.LaRose") == 0); // when gives you 0, they the same

    if(name == "Shelby"){
        printf("You don't get a grade!\n");
    }

    else if(grade >= 90){
        printf("You have an A!\n");
    }else if(grade>=80){
        printf("You have a B!\n");
    }else if(grade >= 70){
        printf("You have a C!\n");
    }else{
        printf("You are failing :(\n");
    }
    //What puts something inside of the “if” statement?
    // curly brackets {}
    //How are conditions written in C?
    // if{}, else if{}, else{}
    //How do we write elif conditions in C?
    // else if
    //When do else conditions run?
    // if the "if" and "else if" conditionals are incorrect/wrong
    //What are the 3 logical operators in C?
    // underneath the includes
    return 0;
}