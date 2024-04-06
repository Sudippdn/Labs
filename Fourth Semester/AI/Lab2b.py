inputGraph = {
    "A": ["B", "C"],
    "B": ["D", "E"],
    "C": ["F"],
    "D": [],
    "E": ["F"],
    "F": [],
}

visitedNodes = []


def breadthFirstSearch(inputGraph, startNode):
    queue = [startNode]
    while queue:
        node = queue.pop(0)
        if node not in visitedNodes:
            visitedNodes.append(node)
            neighbours = inputGraph[node]
            for neighbour in neighbours:
                queue.append(neighbour)
    return visitedNodes


visitedNodes = breadthFirstSearch(inputGraph, "A")
print(visitedNodes)
