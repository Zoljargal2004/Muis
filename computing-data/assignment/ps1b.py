annual_salary = float(input("ehleh jilin tsalin: "))
portion_saved = float(input("tsalingas hadgalah huve: "))
total_cost = float(input("murudlin baishingin une: "))
semi_annual_raise = float(input("hagas jilin tsalingin usult: "))

r = 0.04
portion_down_payment = 0.25

current_savings = 0
months = 0
monthly_salary = annual_salary / 12
down_payment = total_cost * portion_down_payment

while current_savings < down_payment:
    months += 1

    current_savings += current_savings * (r / 12)

    current_savings += monthly_salary * portion_saved

    if months % 6 == 0:
        monthly_salary *= (1 + semi_annual_raise)

print("Niit sar:", months)