inputGraph = {
    'A': [('B', 4), ('D', 12)],
    'B': [('A', 9), ('C', 4)],
    'C': [('D', 4), ('B', 7)],
    'D': [('A', 9), ('C', 5)]
}

goal = "C"

def gbfs(graph, start):
    queue = [start]
    visitedNodes = []

    while queue:
        # Sort the queue based on the heuristic value (second element in the tuple)
        queue = sorted(queue, key=lambda x: x[1])
        node = queue.pop(0)

        if node[0] not in visitedNodes:
            visitedNodes.append(node[0])

            if node[0] == goal:
                break

            neighbours = graph[node[0]]
            for neighbour in neighbours:
                queue.append(neighbour)

    return visitedNodes


print(gbfs(inputGraph, ("A", 13)))
