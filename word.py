
seq = list(input().strip())
caps_count = 0
small_count = 0
ascii = [ord(c) for c in seq]
for i in range(1, len(ascii)):
    if ascii[i] < 97:
        caps_count += 1
    else:
        small_count += 1
    
if caps_count > small_count:
    for i in range(len(seq)):
        seq[i] = seq[i].upper()
else:
    for i in range(len(seq)):
        seq[i] = seq[i].lower() 

print(''.join(seq))        