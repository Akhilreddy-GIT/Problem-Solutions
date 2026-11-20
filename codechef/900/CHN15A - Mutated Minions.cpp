# cook your dish here
def solve():
    # Read number of test cases
    T = int(input())
    
    for _ in range(T):
        # Read N and K
        N, K = map(int, input().split())
        
        # Read the characteristic values
        values = list(map(int, input().split()))
        
        # Count minions that become Wolverine-like
        wolverine_count = 0
        
        for value in values:
            new_value = value + K
            if new_value % 7 == 0:
                wolverine_count += 1
        
        # Output the result
        print(wolverine_count)

# Call the function
solve()