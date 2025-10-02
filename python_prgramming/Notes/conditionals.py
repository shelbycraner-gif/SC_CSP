# S.C 7th Conditionals Notes

#What puts something inside of the “if” statement?
    #if the next line of code is indented
    #homework_done = input("Is your homework done: ").strip().capitalize()
    #if homework_done == "Yes":
    #    print("Yes you can go!")
    #else:
    #    print("Then go do your homework!")
grade = float(input("What is your grade?\n"))
if grade >= 90: #not grade > true. this is false if you have a number above 100 (for this code)
    if grade > 100:
        print("You cheated, that isnt possible")
    else:
        print(f"You have {grade}% and that is an A!")
elif grade >= 80:
    print(f"you have {grade}% that is a B!")
elif grade >= 70:
   print(f"You have {grade}% and that is a C")
else:
    print(f"You have a {grade}% that is a C or lower :(")
#What do if statements do?
    #key word for computer that tells you whether something is true or false
#What are boolean statements? 
    #always result in true or false and also get called condition
#What do else statements do?
    #least likely first, most likely first
#What kind of statement do you use if you have more than 2 needed outcomes?
    #else
#What do each of the different symbols mean in conditionals?
#<
    #less than
#>
    #greater than
#<=
    #less than or equal to
#>=
    #greater than or equal to
#==
    #2 equal signs are questions (are they equal?), 1 equal sign tells a computer that something equal something (they are equal)
#!
    #not equal to
#What are the 3 logical operators?
    #and, or, not

name = input("What is your name:\n").title().strip()
if name == "Ms LaRose":
    print("You are the tacher!")
elif name == "Tia" or name == "Ashley":
    print("You are the TA")
else:
    print(f"Hello {name}, you are a student.")
    if grade >= 70:
        print("And you are passing the class")
#What are logical operators for?
    #allow us to combine multiple conditions so we dont have to build extra conditional statements
#What does a nested conditional statement do?
    #conditon that only happens inside of another conditional