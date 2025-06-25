testcases = int(input())

for _ in range(testcases):
    points = 0

    l1 = list(input())
    l2 = list(input())
    l3 = list(input())
    l4 = list(input())
    l5 = list(input())
    l6 = list(input())
    l7 = list(input())
    l8 = list(input())
    l9 = list(input())
    l10 = list(input())

    
    for i in range(len(l1)):
        if l1[i] == 'X':
            points += 1
    for i in range(len(l10)):
        if l10[i] == 'X':
            points += 1

    
    for i in range(len(l2)):
        if l2[i] == 'X':
            if i == 0 or i == len(l2) - 1:
                points += 1
            else:
                points += 2
        if l9[i] == 'X':
            if i == 0 or i == len(l2) - 1:
                points += 1
            else:
                points += 2

    
    for i in range(len(l3)):
        if l3[i] == 'X':
            if i == 0 or i == 9:
                points += 1
            elif i == 1 or i == 8:
                points += 2
            elif 2 <= i <= 7:
                points += 3
        if l8[i] == 'X':
            if i == 0 or i == 9:
                points += 1
            elif i == 1 or i == 8:
                points += 2
            elif 2 <= i <= 7:
                points += 3

    
    for i in range(len(l4)):
        if l4[i] == 'X':
            if i == 0 or i == 9:
                points += 1
            elif i == 1 or i == 8:
                points += 2
            elif i == 2 or i == 7:
                points += 3
            elif 3 <= i <= 6:
                points += 4
        if l7[i] == 'X':
            if i == 0 or i == 9:
                points += 1
            elif i == 1 or i == 8:
                points += 2
            elif i == 2 or i == 7:
                points += 3
            elif 3 <= i <= 6:
                points += 4

    
    for i in range(len(l5)):
        if l5[i] == 'X':
            if i == 0 or i == 9:
                points += 1
            elif i == 1 or i == 8:
                points += 2
            elif i == 2 or i == 7:
                points += 3
            elif i == 3 or i == 6:
                points += 4
            elif i == 4 or i == 5:
                points += 5
        if l6[i] == 'X':
            if i == 0 or i == 9:
                points += 1
            elif i == 1 or i == 8:
                points += 2
            elif i == 2 or i == 7:
                points += 3
            elif i == 3 or i == 6:
                points += 4
            elif i == 4 or i == 5:
                points += 5

    print(points)