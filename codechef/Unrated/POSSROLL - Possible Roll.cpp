# cook your dish here
X,K,Y=map(int,input().split())

if Y%K==0 and Y//K <=X:
    print("YES")
else:
    print("NO")