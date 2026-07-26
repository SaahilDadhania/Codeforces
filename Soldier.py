cost,initial,k = input().split()

prices = [0] * (int(k) + 1)
for i in range(1, int(k) + 1):
    prices[i] = int(cost) * i

def cost():
    total_cost = 0
    for i in range(1, int(k) + 1):
        total_cost += prices[i]
    return total_cost       
required_cost = cost() - int(initial)
if required_cost < 0:
    required_cost = 0
print(required_cost)