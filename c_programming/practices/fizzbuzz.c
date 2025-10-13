// SC 7th FizzBuzz
#include <stdio.h>

int main(void){
    int num = 1;

    while(num < 51){
    
    if (num / 3 == 0 && num / 5 == 0){
         printf("FizzBuzz!\n");
    }else if (num / 5 == 0){
        printf("Buzz!\n");
    }else if (num / 3 == 0){
        printf("Fizz!\n");
    }else{
        printf("%s \n");
    }
    num++;
    }
       
    return 0;
}