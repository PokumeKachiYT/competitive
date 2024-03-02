str = input().split()

yes = ''

for i in str:
    if len(i) > len(yes):
        yes = i

print(yes)
