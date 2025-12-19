#pragma once
#include <unordered_map>
#include <vector>

class Graph {
  std::unordered_map<int, std::vector<std::pair<int, int>>>
      adjList; // node -> [(neighbor, weight)]
public:
  void addEdge(int from, int to, int weight = 1);
  std::vector<int> bfs(int start);
  std::vector<int> dfs(int start);
  std::vector<int> dijkstra(int start, int end);
  bool hasCycle();
  std::vector<int> topologicalSort();
};
