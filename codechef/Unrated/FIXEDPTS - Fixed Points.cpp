# cook your dish here
T=int(input())
for i in range(T):
    N,K=map(int,input().split())
    
    if K==N or K<=N-2:
        print("Yes")
    else:
        print("No")