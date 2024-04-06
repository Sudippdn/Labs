inputGraph = {
    'A': [('B', 7, 6), ('D', 8, 5)],
    'B': [('A', 7, 9), ('C', 9, 3)],
    'C': [('D', 5, 5), ('B', 9, 4)],
    'D': [('A', 5, 11), ('C', 5, 3)],
}

goal = "D"


def gbfs(graph, start):
    rootToParentCost = 0
    queue = [start + (rootToParentCost,)]  # Add starting node with initial cost

    visitedNodes = []

    while queue:
        # Sort the queue based on f-score (total cost + heuristic)
        queue = sorted(queue, key=lambda x: x[1] + x[2] + x[3])
        node = queue.pop(0)

        rootToParentCost = node[1] + node[3]

        if node[0] not in visitedNodes:
            visitedNodes.append(node[0])

            if node[0] == goal:
                break

            neighbours = graph[node[0]]
            for neighbour in neighbours:
                queue.append(neighbour + (rootToParentCost,))

    return visitedNodes


visitedNodes = gbfs(inputGraph, ('A', 5, 10))

print(visitedNodes)
