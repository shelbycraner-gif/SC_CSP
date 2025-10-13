// SC 7th Loops Notes
#include <stdio.h>


int main(void){
    int nums[] = {1,2,3,4,5,6,7}; //array
    char candies[][20] = {"KitKat","skittles", "Nerds", "Hershey", "Reese's"}; // first [] number of items of list, 2nd set of [] length of strings

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }
    for(int i = 0; i < 5; i++){
        printf("%s is my favorite candy!\n", candies[i]);
    }
    for(int num = 1; num < 11; num++){
        printf("%d\n", num);
    }

    int num = 0;
    while(num < 11){
        printf("%d\n", num);
        num++;
    }
    
    return 0;
}
/*
What is a loop? 
    something that does goes on
What are the two types of loops?
    for loop
    while loop
What is iteration
    amount of time it loops. one instant of a loop num = 0 to num = 1
What are arrays? 
    the same thing as a list in python because they are variables set right next to eachother in the memory
How do you make lists in C? 
    everything has to have the same exact data type int nums[] = {12,12,12,12}
How do you make for loops in C? 
    nums[index number]. for loop needs to have a start point, stop point, and how much we are increasing by 
    num = 0
    while num < 10:
    print(num)
    num+=1
How do you make while loops in C?
    have to put conditions on parenthesis, surround content of your loop with curly brackets
*/