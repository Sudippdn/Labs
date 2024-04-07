inputGraph = {
    'A': [('B', 7, 6), ('D', 8, 5)],
    'B': [('A', 7, 9), ('C', 9, 3)],
    'C': [('D', 5, 5), ('B', 9, 4)],
    'D': [('A', 5, 11), ('C', 5, 3)],
}

goal = "D"


def gbfs(graph, start):
    root_to_parent_cost = 0
    queue = [start + (root_to_parent_cost,)]  

    visited_nodes = []
    while queue:
        queue = sorted(queue, key=lambda x: x[1] + x[2] + x[3])
        node = queue.pop(0)
        root_to_parent_cost = node[1] + node[3]
        if node not in visited_nodes:
            visited_nodes.append(node)
            if node[0] == goal:
                break
        neighbours = graph[node[0]]
        for neighbour in neighbours:
            queue.append(neighbour + (root_to_parent_cost,))  # Add neighbors with cost

    return visited_nodes


visitedNodes = gbfs(inputGraph, ('A', 5, 10))
print(visitedNodes)
