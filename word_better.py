word = input().strip()


caps_count = sum(1 for char in word if char.isupper())


if caps_count > len(word) / 2:
    print(word.upper())

else:
    print(word.lower())