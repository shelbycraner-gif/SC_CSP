// SC 7th Variables notes
#include <stdio.h>

int main(void){
    int grade = 95; //4 bytes, data type
    float pi = 3.14; //4 bytes, data type
    double long_pi = 3.1415926; //8 bytes, data type
    char letter_grade = 'A'; //1 byte, data type
    char name[] = "Shelby"; //made a list of characters
    printf("%s did it!", name);
    printf("You have a %d, in the class, that is an %c", grade, letter_grade);

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
// print is alwasy f string, add printf
// %s creates a string variable
// %c creates a single character
// %d is a digit, for an integer