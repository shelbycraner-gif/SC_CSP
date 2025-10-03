// SC 7th Variables notes
#include <stdio.h>

int main(void){
    int grade; //4 bytes, data type -> d
    float pi = 3.14; //4 bytes, data type -> f
    double long_pi = 3.1415926; //8 bytes, data type -> lf
    char letter_grade; //1 byte -> c
    char name[] = "Shelby"; //made a list of characters
    // user input
    printf("What is your grade percentage as a whole number?: ");
    scanf("%d", &grade);

    printf("What is your letter grade?");
    scanf(" %c", &letter_grade);

    printf("%s did it!\n", name);
    printf("You have a %d, in the class, that is an %c\n", grade, letter_grade);

    return 0;
}

// grade = 95
// grade = "A"
// python is a dynamic typed language
// all variables take the same amount of space, 1 size fits all
// c wants to not overuse space and wants to conserve it so your code will run smoother, wants you to tell it what type the variable is
// integer variable is going to take 4 bytes of space
// int grade = 95;
// characters only get 1 byte of space
// print is alwasy f string, add: printf
// %s creates a string variable
// %c creates a single character
// %d is a digit, for an integer

//What is the main difference between declaring variables in Python and C?
    // you have to specify your 
//In C, what is the purpose of specifying a data type when declaring a variable?
    // you have to set how much space it needs to save by putting what data type it is
//List three common data types used in C and their corresponding format specifiers for printf().
    // 
//How do you declare and initialize an integer variable named "age" with the value 25 in C?
    // int age = 25
//What is the difference between printf() and scanf() functions in C?
    // scanf is a user input, print f is a print
//How do you add comments in C?
    // double forward slash
//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    // it means standard library inputs outputs. makes it to where you can use inputs, ouputs, and geting information from the user
//In C, what is the significance of the main() function?
    // everything is in a function, and is your main function
//What is the difference between %d and %f format specifiers in printf()?
    // %f is a float, %d is a integer
//How do you print a newline character in C?
    //  \n
//What is the purpose of the & symbol when using scanf() to get user input?
    // needs to know the data type, and where you need tpo put the information
//How do you declare a constant in C? Provide an example.
    // marks a variable so it cannot be changed (const float)