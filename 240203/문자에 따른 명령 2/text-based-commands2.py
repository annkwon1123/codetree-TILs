loc = [0,0]
d = 1  #n1, e2, s3, w4

move = input()
for i in move:

    if d > 4 or d < 1:
            d = d % 4

    if i == 'L':
        d -= 1
    elif i == 'R':
        d += 1
    else:
        if d == 1:
            loc[1] += 1
        elif d == 2:
            loc[0] += 1
        elif d == 3:
            loc[1] -= 1
        else:
            loc[0] -= 1

print(loc[0], loc[1])