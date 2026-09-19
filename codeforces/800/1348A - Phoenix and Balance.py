t=int(input())

for _ in range(t):
        n=int(input())
        arr=[]
        for i in range(1,n+1):
            arr.append(2**i)
        
        pile1=arr[-1]+sum((arr[:n//2-1]))
        pile2=sum(arr[n//2-1:-1])
        
        print((pile1-pile2))