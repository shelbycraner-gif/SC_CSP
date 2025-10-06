// SC 7th Expressions Notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.141592653589;

    printf("%d\n", 8/3);
    printf("%.2f\n", 8.0/3);
    printf("%d\n", (int) pow(2,4));
    
    year += 1; //Compound Assingmnet Operator
    printf("%d\n", year);
    year++; //Incrimenator
    printf("%d\n", year);

    return 0;
}
// if both numbers are integers, it will make it an integer, change one number to a float
// to get exponant you have to import the math library
// pow(x,y) is the exponant
// typecasting is when you change the data type
// % is the modulo(remainder) 