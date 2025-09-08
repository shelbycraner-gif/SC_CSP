# S.C 7th Budget Calculator

income = float(input("What is your monthly income?\n"))
rent = float(input("What is your monthly rent?\n"))
utilities = float(input("How much do you pay for utilities?\n"))
groceries = float(input("How much do you pay for groceries monthly?\n"))
transportation = float(input("How much do you pay for transportations monthly?\n"))

savings = income * 0.10
total_cost = rent + utilities + groceries + transportation + savings
spending_money = income-total_cost
rent_percent = (rent / income) * 100
utilities_percent = (utilities / income) * 100
groceries_percent = (groceries / income) * 100
transportation_percent = (transportation / income) * 100
savings_percent = (savings / income) * 100

income_rent = print(f'Your rent is:${rent:.2f} and that is {rent_percent:.0f}% of your income!\n')
income_utilties = print(f'Your utilties cost:${utilities:.2f} and that is {utilities_percent:.0f}% of your income!\n')
income_groceries = print(f'Your Groceries costs:${groceries:.2f} and that is {groceries_percent:.0f}% of your income!\n')
income_transport = print(f'Your Transport costs:${transportation:.2f} and that is {transportation_percent:.0f}% of your income!\n')
income_savings = print(f'You should save ${savings:.2f} and that is {savings_percent:.0f}% of your income!\n')
print(f'You have ${spending_money:.2f} spending money every month!')