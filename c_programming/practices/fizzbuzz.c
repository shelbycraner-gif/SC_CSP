// SC 7th FizzBuzz
#include <stdio.h>

int main(void){

    for (int x = 1; x <= 50; x++){
    
        if (x % 3 == 0 && x % 5 == 0){
            printf("FizzBuzz!\n", x);
        }else if (x % 5 == 0){
            printf("Buzz!\n", x);
        }else if (x % 3 == 0){
            printf("Fizz!\n", x);
        }else{
            printf("%d\n", x);
        }
    }
       
    return 0;
}