scores = []

for i in range(5):
    score = int(input("dun: "))
    scores.append(score)

average = sum(scores) / len(scores)
print("Dundaj" , average)

if average < 60:
    print("Dun: F")
elif(average < 70):
    print("Dun: D")
elif(average < 80):
    print("Dun: C")
elif average < 90:
    print("Dun: B")
else:
    print("Dun: A")
    