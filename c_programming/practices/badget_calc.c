// SC 7th Budget Calculator
#include <stdio.h>
#include <math.h>
char name[1500];
float income,rent,utilities,groceries,transportation,savings,spending;
int main(void){
    printf("This is a Budget calculator!\n");
    printf("Please enter your income: \n");
    scanf("%f", &income);
    printf("Enter your rent: \n");
    scanf("%f", &rent);
    printf("Enter your utilities: \n");
    scanf("%f", &utilities);
    printf("Enter your groceries cost: \n");
    scanf("%f", &groceries);
    printf("Enter your transportation: \n");
    scanf("%f", &transportation);

    float savings = income * 0.10;
    float spending = income - savings - rent - utilities - groceries - transportation;
    float rent_percent = rent / income * 100;
    float utilities_perecnt = utilities / income * 100;
    float groceries_percent = groceries / income * 100;
    float transportation_percent = transportation / income * 100;
    float savings_percent = savings / income * 100;
    float spending_percent = spending / income * 100;
    float saving_percent = savings / income *100;

    printf("Your rent is $%.2f, which is %.2f percent of your income.\n", rent, rent_percent);
    printf("Your utilities is $%.2f, which is %.2f percent of your income.\n", utilities, utilities_perecnt);
    printf("Your groceries is $%.2f, which is %.2f percent of your income.\n", groceries, groceries_percent);
    printf("Your transportatin is $%.2f, which is %.2f percent of your monthly income.\n", transportation, transportation_percent);
    printf("Your savings is $%.2f, which is %.2f percent of your income.\n", savings, saving_percent);
    printf("Your spending money is $%.2f, which is %.2f percent of your income.\n", spending, spending_percent);
    printf("Thank you for using my budget calculator.\n");
    
    return 0;
}