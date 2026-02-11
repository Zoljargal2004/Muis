lis = []
for i in range(7):
    lis.append(int(input("Temp: ")))

min = max = lis[0]

for i in range(7):
    if lis[i] < min:
        min = lis[i]
    elif lis[i] > max:
        max = lis[i]
print("hamgin baga udur ", max)
print("hamgin ih udur : ", min)
a = sum(lis) / len(lis)
print("dundaj : ", a)
count = 0
for i in range(7):
    if(lis[i] > a):
        count+=1
print("dundjas ih : ", count)