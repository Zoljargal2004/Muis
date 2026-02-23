
annual_salary = float(input("ehleh jinin tslin: "))


semi_annual_raise = 0.07
r = 0.04
total_cost = 1000000
portion_down_payment = 0.25
down_payment = total_cost * portion_down_payment
months = 36


low = 0
high = 10000
steps = 0

def savings_after_36_months(portion_saved):
    current_savings = 0
    monthly_salary = annual_salary / 12

    for m in range(1, months + 1):
        current_savings += current_savings * (r / 12)
        current_savings += monthly_salary * portion_saved

        if m % 6 == 0:
            monthly_salary *= (1 + semi_annual_raise)

    return current_savings


if savings_after_36_months(1.0) < down_payment - 100:
    print("3 jild uridchilga tsuglulah blmjqu")
    exit()

best_rate = None

while low <= high:
    steps += 1
    mid = (low + high) // 2
    rate = mid / 10000

    saved = savings_after_36_months(rate)

    if abs(saved - down_payment) <= 100:
        best_rate = rate
        break
    elif saved < down_payment:
        low = mid + 1
    else:
        high = mid - 1

print(f"tsalin hadgalah blmjtoi huve: {best_rate:.4f}")
print(f"2 tin hailtin alham: {steps}")