# cook your dish here
T=int(input())
for _ in range(T):
    N,M,K=map(int,input().split())
    occupied=set(map(int,input().split()))
    
    ans=[]
    
    for _ in range(K):
        for seat in range(1,N+1):
            if seat not in occupied:
                ans.append(seat)
                occupied.add(seat)
                break
    print(*ans)