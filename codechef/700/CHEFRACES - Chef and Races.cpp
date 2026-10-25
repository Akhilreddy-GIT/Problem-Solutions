# cook your dish here
T = int(input())

for _ in range(T):
    X, Y, A, B = map(int, input().split())

    chef_races = {X, Y}
    rival_races = {A, B}

    print(len(chef_races - rival_races))