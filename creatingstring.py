s = input()
letters = list(s)
words = set()


def numWays(word, letters):
    if len(letters) == 1:
        words.add(word + letters[0])
    else:
        for i in range(len(letters)):
            numWays(word + letters[i], letters[0:i] + letters[i+1:])


numWays("", letters)

print(len(words))
print("\n".join(sorted(words)))
