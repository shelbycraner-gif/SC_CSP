# S.C 7th Function Notes

# What a function is
    # telling a code what to do, eg input()
def add(number, number2):   
   number += num2
   print(number)

num1 = 12
num2 = 4

add(80, 8)
# Why we use functions
    # to make a code make sense (make our lives easier) (to make code run properly)
# How to write a function in Python
    # print()
    # input()
    # welcome()
    # add()
# What parameters and arguments are
    # parameter=variable that exists only in function
    # arguments=value you give the unction when you call it
# How to use parameters and arguments in python
    # def add(number1, number2) = parameter
    # add(80, 2) = arguments
# What return statements are 
    # takes value and sends it to a direct place
import random
def roll(mod):
   return random.randint(1, 18) + mod
strength = roll(0)
dexterity = roll(1)
intellegence = roll(1)
charisma = roll(0)
print("Your stats are:")
print(f"Strength: {strength}\nDex: {dexterity}\nInt: {intellegence}\nChar: {charisma}")
# How to use return statements in a program
    # import random
    # def roll(mod):
    # return random.randint(1, 18) + mod
    # strength = roll(0)
    # dexterity = roll(1)
    # charisma = roll(0)
    # print("Your stats are:")
    # print(f"Strength: {strength}\nDex: {dexterity}\nInt: {intellegence}\nChar: {charisma}")