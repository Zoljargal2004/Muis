asd = {}
lis = input().split(" ")
for item in lis:
    if item in asd:
        asd[item] += 1
    else:
        asd[item] = 1
        
for key, val in asd.items():
    if val > 1:
        print(key, val)