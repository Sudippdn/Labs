def waterJugSolution(xCapacity, yCapacity, target, reverse=False):
    path = [[0, 0]]

    y = yCapacity
    x = 0

    path.append([x, y])

    steps = 1

    while ((y != target) and (x != target)):
        temp = min(y, xCapacity - x)
        x = x + temp
        y = y - temp

        path.append([x, y])

        steps = steps + 1

        if ((y == target) or (x == target)):
            break

        if y == 0:
            y = yCapacity
            path.append([x, y])
            steps = steps + 1

        if x == xCapacity:
            x = 0
            path.append([x, y])
            steps = steps + 1

    if reverse:
        path = [[y, x] for x, y in path]

    return [path, steps]


xCapacity = int(input("Jug 1= "))
yCapacity = int(input("Jug 2= "))
target = int(input("Target vol = "))


def solveGCD(a, b):
    if b == 0:
        return a
    return solveGCD(b, a % b)


if target % solveGCD(xCapacity, yCapacity) == 0:
    path1, step1 = waterJugSolution(xCapacity, yCapacity, target, reverse=False)
    path2, step2 = waterJugSolution(yCapacity, xCapacity, target, reverse=True)

    if step1 <= step2:
        print("The path is:", path1)
        print("The steps are:", step1)
    else:
        print("The path is:", path2)
        print("The steps are:", step2)
else:
    print("Solution failed")
