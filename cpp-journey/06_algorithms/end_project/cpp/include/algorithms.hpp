#pragma once
#include <string>
#include <vector>

namespace algorithms {
// Sorting
void bubbleSort(std::vector<int> &arr);
void mergeSort(std::vector<int> &arr);
void quickSort(std::vector<int> &arr);
void heapSort(std::vector<int> &arr);

// Searching
int binarySearch(const std::vector<int> &arr, int target);
int interpolationSearch(const std::vector<int> &arr, int target);

// Graph
std::vector<int>
dijkstra(const std::vector<std::vector<std::pair<int, int>>> &graph, int start,
         int end);
std::vector<int> bfs(const std::vector<std::vector<int>> &graph, int start);
} // namespace algorithms

extern "C" {
double bench_sort(const char *algo, int *data, int n);
double bench_search(const char *algo, int *data, int n, int target);
}
