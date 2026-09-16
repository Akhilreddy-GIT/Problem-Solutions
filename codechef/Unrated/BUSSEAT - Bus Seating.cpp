# cook your dish here
T=int(input())
for i in range(T):
    N,K=map(int,input().split())
    
    if K<=N:
        print(0)
    else:
        print(2*(K-N))