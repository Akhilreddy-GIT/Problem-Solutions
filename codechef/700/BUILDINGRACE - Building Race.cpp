# cook your dish here
T=int(input())

for i in range(T):
    A,B,X,Y=map(int,input().split())
    if A/X > B/Y:
        print("Chefina")
    elif A/X==B/Y:
        print("Both")
    else:
        print("Chef")