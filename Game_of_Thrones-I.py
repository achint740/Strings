from collections import Counter
def gameOfThrones(s):
    add = 0
    for x in Counter(s).values():
        add+=x%2
    return "NO" if add>1 else "YES"

print(gameOfThrones(input()))
