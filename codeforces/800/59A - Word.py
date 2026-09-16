s=input()
upper=0

for ch in s:
    if ch.isupper():
        upper+=1

if upper > len(s)-upper:
    print(s.upper())

else:
    print(s.lower())