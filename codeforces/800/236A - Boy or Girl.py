username=input()
unique=set(username)

if len(unique)%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")