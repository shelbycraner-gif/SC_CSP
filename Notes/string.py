# S.C 7th String Notes

#What makes something a string?
    # A set of symbols held together by a set of quotation marks "" or ''
first_name = input("What is your First name:\n").strip().lower().title()

last_name = input("What is your Last name:\n").strip().lower().title()

sentence = 'The quick brown fox jumps over the lazy dog'.strip()

print("Welcome to my program!")

print(sentence.find("jumps"))
print(sentence[20:25]) #slicing
print(sentence[sentence.find("lazy)"): len("lazy")+sentence.find("lazy)")])

full_name = first_name +" "+ last_name
print("welcome to my program", full_name +"!")


#Why do we have strings?
    # only way to get actual letters displayed by our code
#How do stupid proofing and sanitization relate to each other?
    # Sanitization is cleaning your input code while stupid proofing is the higher level so users can't break it. Step 1 is sanitization of Stupid Proofing so the user cannot break your code
#What is debugging?
    # Process of fixing your program/code (bug is an error in your code)
       # 1) Syntax Error: if you have spaces where they dont belong, tabs where they dont belong, mispelling is a syntax error, miswsign eqal sign, missing quotation mark
error = "this is a bug"
    # 2) Logic Error: when you do something against your logic
numOne = 1
numTwo = 2
print(numOne+numTwo)
# 3) Run-Time Error: when your code looks perfectly fine (when data looks right but is wrong and when you stupid proof incorrectly)
num = 3
print("My favorite number is", +num)
#How do you debug the different types of errors?
     # run it and fix it
#Describe what each of the methods below does:
    #find()
        # tells us beggining index of a word
    #concatenate (add)
        # putting two strings together to make one string
    #upper()
        # whatever user types in makes it lowercase
    #lower()
        # whatever user types in makes it uppercase
    #strip()
         # gets rid of extra spaces in beggining and end