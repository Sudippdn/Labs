inputGraph = {
    'A': [('B', 4), ('D', 12)],
    'B': [('A', 9), ('C', 4)],
    'C': [('D', 4), ('B', 7)],
    'D': [('A', 9), ('C', 5)]
}

goal = "C"


def gbfs(graph, start):
    queue = [start]
    visited_nodes = []
    while queue:
        queue = sorted(queue, key=lambda x: x[1])  # Sort by weight
        node = queue.pop(0)
        if node not in visited_nodes:
            visited_nodes.append(node)
            if node[0] == goal:
                break
        neighbours = graph[node[0]]
        for neighbour in neighbours:
            queue.append(neighbour)
    return visited_nodes


print(gbfs(inputGraph, ("A", 13)))  # Starting node with a heuristic cost of 13
