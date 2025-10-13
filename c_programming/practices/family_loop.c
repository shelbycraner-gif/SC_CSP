// SC 7th Family Loop
#include <stdio.h>

int main(void){
     char names[][50] = {"Mother", "Father", "Camry", "Maleri", "Carter"};
     for(int i = 0; i < 5; i++){
        printf("Hello %s!\n", names[i]);
     }
    return 0;
}