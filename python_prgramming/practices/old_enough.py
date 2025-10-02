# SC 7th old enough

#vote-18
#drive-16
#drive permit-14
#school-4
#42-vote
#7-school
#17-drive
#3-not old enough for anything

Age = float(input("How old are you?\n"))
if Age <= 3:
    print("You are not allowed to do any of the above.")
elif Age >= 15 and not Age >= 16:
    print("You should be getting your drivers permit")
elif Age >= 16 and not Age >= 18:
    print("You should be getting your drivers license")
elif Age >= 18 and not Age <= 17:
    print("You should start voting")
else:
   if Age >= 35:
    print("You are a senior citzen")