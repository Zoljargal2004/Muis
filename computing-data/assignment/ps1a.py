portion_down_payment= 0.25
current_savings = 0
r = 0.04

annual_salary = int(input("Tsalin: "))
portion_saved = float(input("khadgalah tsalingin huve: "))
total_cost = int(input("Bairni une: "))

count = 0

while (total_cost * portion_down_payment >= current_savings):
    current_savings += annual_salary / 12 * portion_saved
    current_savings += current_savings * r / 12
    count+=1
print(count, " sar tsugluulna")