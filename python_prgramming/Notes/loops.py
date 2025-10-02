# S.C 7th Loops Notes

foods = ["Chocolate", "Pasta", "Brownies", "Cookies", "Garlic Bread", "Fajitas"]

# For loops is a loop following an order of instructions

# iterator --> how many times loop had run
# set stopping point
# increase iterator
# infinant loops is a loop that goes forever
for food in foods:
    #print(f"{food} is my favorite food!")
    print("Hi!")

for x in range(1,20):
    print(x)
#loops repeat a section of code inside them for a specified number of times
# while loops
i = 0
"""while True:
    print(i)
    i+1 = 1"""
#infinant loops =  bad, breaks our stuff. mean we are missing one of our three steps (our stopping point)

#correct while loop
i = 1
while i <= 20:
    print(i)
    i+= 1

x = 1
while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even number")
    else:
        print(f"{x} is an odd number")
    print(x)
    x +=1

import random
d = 1
end = random.randint(1,20)

"""while d != end:
    print("Duck")
    d += 1
print("Goose")"""

while True:
    if d == end:
        print("Goose!")
        break
    else:print("Duck!")
    d += 1
#iteration=yes has to do with iterator, not the same thing.
#iteration is a repitition of the same code