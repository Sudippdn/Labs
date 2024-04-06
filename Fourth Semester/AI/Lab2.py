inputGraph = {
   "A": ["B", "C"],
   "B": ["D", "E"],
   "C": ["F"],
   "D": [],
   "E": ["F"],
   "F": [],
}

visitedNodes = []

def depthFirstSearch(graph, node):
   if node not in visitedNodes:
       visitedNodes.append(node)
       neighbours = graph[node]
       for neighbour in neighbours:
           depthFirstSearch(graph, neighbour)
   return visitedNodes

visitedNodes = depthFirstSearch(inputGraph, 'A')
print(visitedNodes)
