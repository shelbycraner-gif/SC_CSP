//SC 7th Functions Notes
#include <stdio.h>
void birthday(char* name, int age){
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday %s you are %d!\n", name, age);
}

int mul(int x, int y){
    return x * y;
}

float get_number(char* type){
    float value;
    printf("How many %s do you have?: \n", type);
    scanf("%f", &value);
    return value;
}

int main(void){
    birthday("Jesus", 15);
    birthday("Gwen", 14);
    birthday("Cecily", 16);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(4,6));
    float pencils = get_number("pencils");
    float notebooks = get_number("notebooks");
    printf("You have %.2f pencils and %.2f notebooks", pencils, notebooks);
    return 0;
}
/*
What a function is
    a piece of code that can be used as many times as you call it
Why we use functions
    to make our lives easier(to make something take up less code)
How to write a function in C
    never define a function in a function, have to be written above main function
    void means nothing and is returning nothing
What are arguments and parameters?
    parameters(name) is when you define, an argument is when you call it
How do arguments and parameters work together?
    you have to have a parameter to have an argument
How to use parameters and arguments in C
    you put parameters in the () after function name, arguments you have to clarify what that argument will be
What are return statements?
    when you call your function, its going to place it exactly where it was called
How do return statements change how you define a function in C?
    when you define, you have to tell what type of value you are returning
What do return statements do with the information?
    returns the data type
*/