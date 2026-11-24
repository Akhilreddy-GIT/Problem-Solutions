# cook your dish here

s = input()

count = 0
i = 0

while i < len(s):
    if s[i] in "aeiou":
        count += 1

    i += 1

print(count)
