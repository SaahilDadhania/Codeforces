
number = int(input())
sequence = input() 

removals = 0


for i in range(1, number):
    
    if sequence[i] == sequence[i - 1]:
        removals += 1

print(removals)