# SC 7th Time of Day

import datetime

now = int(input("Insert the current time for you in military time: \n"))
now_is = datetime.datetime.now()

if now >= 1 and now < 11:
    print("Good morning!")
elif now >= 1200 and now < 1730:
    print("Good Afternoon!")
elif now >= 1731 and now < 23:
    print("Good evening")
else:
    print("Are you dumb? That isnt a time idiot?")